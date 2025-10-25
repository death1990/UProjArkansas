#pragma once
#include "CoreMinimal.h"
#include "OnDetectedDeadBodyDelegateDelegate.generated.h"

class AActor;
class AIndianaAiCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDetectedDeadBodyDelegate, AIndianaAiCharacter*, OwnerAICharacter, AActor*, DetectedBody);

