#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "DialogueNode.h"
#include "CinematicNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FCinematicNode : public FDialogueNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SequencePath;
    
public:
    FCinematicNode();
};

