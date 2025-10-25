#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorClassInitParams.generated.h"

class AIndianaAiCharacter;
class AIndianaAiController;
class UBehaviorTree;

USTRUCT(BlueprintType)
struct FAIBehaviorClassInitParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIndianaAiCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIndianaAiController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowLoad: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoSyncLoad: 1;
    
    ARKANSAS_API FAIBehaviorClassInitParams();
};

