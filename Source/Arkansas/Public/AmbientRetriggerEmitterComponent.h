#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIWwise -ObjectName=OEIWwiseAmbientEmitterComponent -FallbackName=OEIWwiseAmbientEmitterComponent
#include "AmbientRetriggerEmitterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UAmbientRetriggerEmitterComponent : public UOEIWwiseAmbientEmitterComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHandleLifetimeAutomatically;
    
    UAmbientRetriggerEmitterComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void EmitterVirtualised();
    
    UFUNCTION(BlueprintCallable)
    void EmitterPhysicalised();
    
};

