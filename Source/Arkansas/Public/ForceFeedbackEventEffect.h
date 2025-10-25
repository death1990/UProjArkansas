#pragma once
#include "CoreMinimal.h"
#include "EventEffect.h"
#include "ForceFeedbackEventEffect.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UForceFeedbackEventEffect : public UEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelable;
    
public:
    UForceFeedbackEventEffect();

};

