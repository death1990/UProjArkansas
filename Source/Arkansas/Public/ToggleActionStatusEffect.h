#pragma once
#include "CoreMinimal.h"
#include "ETogglableAction.h"
#include "StatusEffect.h"
#include "ToggleActionStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UToggleActionStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETogglableAction Action;
    
public:
    UToggleActionStatusEffect();

};

