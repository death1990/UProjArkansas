#pragma once
#include "CoreMinimal.h"
#include "AIAnimProxyPostMoveScriptDelegateDelegate.generated.h"

class AAnimationProxyActor;
class AIndianaAiCharacter;
class AIndianaAiController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FAIAnimProxyPostMoveScriptDelegate, AIndianaAiCharacter*, Character, AIndianaAiController*, Controller, AAnimationProxyActor*, AnimationProxyActor, bool, bSuccess);

