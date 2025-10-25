#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SoftCoverVolume.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ARKANSAS_API ASoftCoverVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CollisionStaticMeshComponent;
    
public:
    ASoftCoverVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSoftCoverEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSoftCoverEnabled();
    
};

