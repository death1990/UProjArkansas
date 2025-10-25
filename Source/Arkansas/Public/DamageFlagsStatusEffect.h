#pragma once
#include "CoreMinimal.h"
#include "EDamageFlags.h"
#include "StatusEffect.h"
#include "DamageFlagsStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDamageFlagsStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDamageFlags> DamageFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwapOriginAndTargetActor;
    
public:
    UDamageFlagsStatusEffect();

};

