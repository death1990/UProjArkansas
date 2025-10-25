#pragma once
#include "CoreMinimal.h"
#include "OnPlayerHackDelegate.generated.h"

class AActor;
class AIndianaCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerHack, AIndianaCharacter*, Character, AActor*, HackedActor);

