#pragma once
#include "CoreMinimal.h"
#include "DisableStatusEffect.h"
#include "EDisablePriority.h"
#include "IdleDisableStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UIdleDisableStatusEffect : public UDisableStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisablePriority DisablePriority;
    
public:
    UIdleDisableStatusEffect();

};

