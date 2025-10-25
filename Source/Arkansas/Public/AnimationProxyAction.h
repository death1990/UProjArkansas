#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "AnimationProxyAction.generated.h"

class AAnimationProxyActor;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UAnimationProxyAction : public UAIAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAnimationProxyActor* AnimationProxyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavigationFlags;
    
public:
    UAnimationProxyAction();

};

