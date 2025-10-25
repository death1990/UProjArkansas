#pragma once
#include "CoreMinimal.h"
#include "EHudIconDisplayArea.h"
#include "StatusEffect.h"
#include "DisplayIconInHudStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UDisplayIconInHudStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHudIconDisplayArea HudDisplayArea;
    
public:
    UDisplayIconInHudStatusEffect();

};

