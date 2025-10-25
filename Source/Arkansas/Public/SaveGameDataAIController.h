#pragma once
#include "CoreMinimal.h"
#include "SaveGameDataAIAnimProxy.h"
#include "SaveGameDataDetection.h"
#include "SaveGameDataOwBehaviorTree.h"
#include "SaveGameDataTargetInfo.h"
#include "SaveGameDataAIController.generated.h"

USTRUCT(BlueprintType)
struct FSaveGameDataAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveGameDataDetection DetectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveGameDataTargetInfo TargetInfoData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveGameDataOwBehaviorTree OwBehaviorTreeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveGameDataAIAnimProxy AIAnimProxyData;
    
public:
    ARKANSAS_API FSaveGameDataAIController();
};

