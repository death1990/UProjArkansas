#pragma once
#include "CoreMinimal.h"
#include "ComputerTerminal.h"
#include "TrapTerminal.generated.h"

class AHazard;
class ATrapTrigger;

UCLASS(Blueprintable)
class ATrapTerminal : public AComputerTerminal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATrapTrigger*> ConnectedTrapTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHazard*> ConnectedHazards;
    
    ATrapTerminal(const FObjectInitializer& ObjectInitializer);

};

