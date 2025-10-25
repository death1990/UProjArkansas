#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "LogicalExpression.h"
#include "SubtitleVolume.generated.h"

class UConversationAsset;

UCLASS(Blueprintable)
class ARKANSAS_API ASubtitleVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConversationAsset* Conversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalExpression DisplayCondition;
    
public:
    ASubtitleVolume(const FObjectInitializer& ObjectInitializer);

};

