#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PlayerEnteredAwareVolumeDelegate.h"
#include "PlayerExitedAwareVolumeDelegate.h"
#include "PlayerAwareVolume.generated.h"

class UPointOfInterestData;

UCLASS(Blueprintable)
class ARKANSAS_API APlayerAwareVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerEnteredAwareVolume OnPlayerEnteredAwareVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerExitedAwareVolume OnPlayerExitedAwareVolume;
    
    APlayerAwareVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void FastTravelInitiated(const UPointOfInterestData* TravelData, float TimePassed);
    
};

