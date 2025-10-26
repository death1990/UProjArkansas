#pragma once
#include "CoreMinimal.h"
#include "ConversationReference.h"
#include "EMarkType.h"
#include "CineConversationInfo.generated.h"

class AActor;
class AStagePrefabActor;

USTRUCT(BlueprintType)
struct OEICINEMATICS_API FCineConversationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationReference ConversationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStagePrefabActor* StageOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMarkType, AActor*> MarkOverrides;
    
    FCineConversationInfo();
};

