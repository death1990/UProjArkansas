#pragma once
#include "CoreMinimal.h"
#include "CharacterCondition.h"
#include "EIdleState.h"
#include "PlayerConditionTPVAnimIdleState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UPlayerConditionTPVAnimIdleState : public UCharacterCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIdleState CurrentState;
    
public:
    UPlayerConditionTPVAnimIdleState();

};

