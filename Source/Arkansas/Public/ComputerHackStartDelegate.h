#pragma once
#include "CoreMinimal.h"
#include "ComputerHackStartDelegate.generated.h"

class AActor;
class AComputerTerminal;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FComputerHackStart, AActor*, Initiator, const AComputerTerminal*, HackedTerminal, uint8, HackSeconds, uint8, HackNumResources);

