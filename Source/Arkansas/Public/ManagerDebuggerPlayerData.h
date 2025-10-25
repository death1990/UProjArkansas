#pragma once
#include "CoreMinimal.h"
#include "ManagerDebuggerPlayerData.generated.h"

class UInputComponent;

USTRUCT(BlueprintType)
struct FManagerDebuggerPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
    ARKANSAS_API FManagerDebuggerPlayerData();
};

