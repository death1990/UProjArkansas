#pragma once
#include "CoreMinimal.h"
#include "AIInterruptStartScriptDelegateDelegate.generated.h"

class AIndianaAiCharacter;
class AIndianaAiController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAIInterruptStartScriptDelegate, AIndianaAiCharacter*, Character, AIndianaAiController*, Controller, bool, bFromOtherInterrupt);

