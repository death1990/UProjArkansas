#pragma once
#include "CoreMinimal.h"
#include "BasicMapFloorTrackedActor.h"
#include "ESkillDifficultyTier.h"
#include "FastTravelPoint.h"
#include "PointOfInterest.generated.h"

class AActor;
class APOIDiscoveryVolume;
class UPointOfInterestData;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ARKANSAS_API APointOfInterest : public ABasicMapFloorTrackedActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPointOfInterestData* PointOfInterestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DiscoveryBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APOIDiscoveryVolume*> DiscoveryVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillDifficultyTier TierOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFastTravelPoint> FastTravelPoints;
    
public:
    APointOfInterest(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

