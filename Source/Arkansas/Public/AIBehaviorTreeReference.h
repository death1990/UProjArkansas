#pragma once
#include "CoreMinimal.h"
#include "AISubBehaviorTreeInstance.h"
#include "AIBehaviorTreeReference.generated.h"

class UOwBehaviorTree;

USTRUCT(BlueprintType)
struct FAIBehaviorTreeReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOwBehaviorTree> BehaviorTreeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAISubBehaviorTreeInstance> SubBehaviorTreeInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubTreeInstanceCommonPackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubTreeInstanceCommonOuterPath;
    
    ARKANSAS_API FAIBehaviorTreeReference();
};

