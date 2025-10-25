#pragma once
#include "CoreMinimal.h"
#include "EAnimMovementModifierState.h"
#include "EventEffect.h"
#include "PlayAnimStateEventEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPlayAnimStateEventEffect : public UEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimMovementModifierState MovementModifierState;
    
public:
    UPlayAnimStateEventEffect();

};

