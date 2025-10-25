#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DamageDescription.h"
#include "VFXCreature.generated.h"

UCLASS(Abstract, Blueprintable)
class ARKANSAS_API AVFXCreature : public AActor {
    GENERATED_BODY()
public:
    AVFXCreature(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomRadialDamageEvent(const FVector& Origin, const FDamageDescription& DamageDescription);
    
};

