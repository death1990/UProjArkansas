#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "CustomTimeDilationStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCustomTimeDilationStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomTimeDilation;
    
public:
    UCustomTimeDilationStatusEffect();

};

