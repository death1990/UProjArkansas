#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ScriptNode.h"
#include "ChatterBranchNode.generated.h"

USTRUCT(BlueprintType)
struct FChatterBranchNode : public FScriptNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ParentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid EventID;
    
public:
    OEIFLOWCHARTS_API FChatterBranchNode();
};

