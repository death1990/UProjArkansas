#pragma once
#include "CoreMinimal.h"
#include "BasePlayAnimEventEffect.h"
#include "EGadgetActivationType.h"
#include "PlayGadgetAnimEventEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UPlayGadgetAnimEventEffect : public UBasePlayAnimEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetActivationType Type;
    
public:
    UPlayGadgetAnimEventEffect();

};

