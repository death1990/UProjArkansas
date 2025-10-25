#pragma once
#include "CoreMinimal.h"
#include "OwBaseTaskStreamingState.h"
#include "BehaviorClassTaskMigrationData.generated.h"

class UAIBehaviorClass;
class UBehaviorTree;

USTRUCT(BlueprintType)
struct FBehaviorClassTaskMigrationData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOwBaseTaskStreamingState StreamingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIBehaviorClass* BehaviorClassInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTreeAsset;
    
public:
    ARKANSAS_API FBehaviorClassTaskMigrationData();
};

