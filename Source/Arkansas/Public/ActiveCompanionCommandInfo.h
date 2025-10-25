#pragma once
#include "CoreMinimal.h"
#include "ECompanionCommand.h"
#include "ActiveCompanionCommandInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActiveCompanionCommandInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompanionCommand CurrentCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
    ARKANSAS_API FActiveCompanionCommandInfo();
};

