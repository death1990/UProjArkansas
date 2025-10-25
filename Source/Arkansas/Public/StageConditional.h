#pragma once
#include "CoreMinimal.h"
#include "LogicalExpression.h"
#include "StageConditional.generated.h"

class AStagePrefabActor;
class UStagePrefabAsset;

USTRUCT(BlueprintType)
struct FStageConditional {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalExpression Conditional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFindStageByTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStagePrefabActor* StageInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStagePrefabAsset* StageAsset;
    
    ARKANSAS_API FStageConditional();
};

