#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EReactionEndOption.h"
#include "AnimNotify_P3PEndHitReaction.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_P3PEndHitReaction : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReactionEndOption ReactionTypeToEnd;
    
public:
    UAnimNotify_P3PEndHitReaction();

};

