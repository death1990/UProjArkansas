#pragma once
#include "CoreMinimal.h"
#include "AIInterruptStopScriptDelegateDelegate.generated.h"

class AIndianaAiCharacter;
class AIndianaAiController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAIInterruptStopScriptDelegate, AIndianaAiCharacter*, Character, AIndianaAiController*, Controller, bool, bToOtherInterrupt);

