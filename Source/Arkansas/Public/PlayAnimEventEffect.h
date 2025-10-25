#pragma once
#include "CoreMinimal.h"
#include "BasePlayAnimEventEffect.h"
#include "PlayAnimEventEffect.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPlayAnimEventEffect : public UBasePlayAnimEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Anim;
    
public:
    UPlayAnimEventEffect();

};

