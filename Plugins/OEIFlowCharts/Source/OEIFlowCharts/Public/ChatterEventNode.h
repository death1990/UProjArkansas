#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "DialogueNode.h"
#include "ChatterEventNode.generated.h"

USTRUCT(BlueprintType)
struct FChatterEventNode : public FDialogueNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid EventID;
    
public:
    OEIFLOWCHARTS_API FChatterEventNode();
};

