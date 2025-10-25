#pragma once
#include "CoreMinimal.h"
#include "AIAnimProxyFinishedScriptDelegateDelegate.generated.h"

class AAnimationProxyActor;
class AIndianaAiCharacter;
class AIndianaAiController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAIAnimProxyFinishedScriptDelegate, AIndianaAiCharacter*, Character, AIndianaAiController*, Controller, AAnimationProxyActor*, AnimationProxyActor);

