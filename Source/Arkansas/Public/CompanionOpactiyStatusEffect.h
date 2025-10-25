#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "CompanionOpactiyStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UCompanionOpactiyStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Opacity;
    
public:
    UCompanionOpactiyStatusEffect();

};

