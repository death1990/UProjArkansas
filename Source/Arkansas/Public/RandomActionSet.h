#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "RandomActionSetPair.h"
#include "RandomActionSet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API URandomActionSet : public UAIAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomActionSetPair> PotentialActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIAction* ChosenAction;
    
public:
    URandomActionSet();

};

