#pragma once
#include "CoreMinimal.h"
#include "AIAnimProxyStartedScriptDelegateDelegate.generated.h"

class AAnimationProxyActor;
class AIndianaAiCharacter;
class AIndianaAiController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAIAnimProxyStartedScriptDelegate, AIndianaAiCharacter*, Character, AIndianaAiController*, Controller, AAnimationProxyActor*, AnimationProxyActor);

