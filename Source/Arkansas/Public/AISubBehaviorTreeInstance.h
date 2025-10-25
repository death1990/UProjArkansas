#pragma once
#include "CoreMinimal.h"
#include "ClassPropertyDataWithObjects.h"
#include "AISubBehaviorTreeInstance.generated.h"

class UBTTask_SubTree;

USTRUCT(BlueprintType)
struct FAISubBehaviorTreeInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBTTask_SubTree* SubTreeInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ObjectPersistentFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClassPropertyDataWithObjects PropertyDataWithObjects;
    
    ARKANSAS_API FAISubBehaviorTreeInstance();
};

