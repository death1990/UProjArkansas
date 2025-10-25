#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ManagerDebuggerPlayerData.h"
#include "ManagerDebugger.generated.h"

UCLASS(Blueprintable)
class UManagerDebugger : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManagerDebuggerPlayerData> PlayerData;
    
public:
    UManagerDebugger();

};

