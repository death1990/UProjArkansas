#pragma once
#include "CoreMinimal.h"
#include "ArmorModifier.h"
#include "StatusEffect.h"
#include "ArmorStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UArmorStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArmorModifier> Modifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrependValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAppendSignToValue;
    
public:
    UArmorStatusEffect();

};

