#pragma once
#include "CoreMinimal.h"
#include "AIInterruptIsRunningScriptDelegateDelegate.generated.h"

class AIndianaAiCharacter;
class AIndianaAiController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FAIInterruptIsRunningScriptDelegate, AIndianaAiCharacter*, Character, AIndianaAiController*, Controller);

