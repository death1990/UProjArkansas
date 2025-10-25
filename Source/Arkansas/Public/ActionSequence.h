#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "ActionSequence.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UActionSequence : public UAIAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAIAction*> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIAction* ConstructedAction;
    
public:
    UActionSequence();

};

