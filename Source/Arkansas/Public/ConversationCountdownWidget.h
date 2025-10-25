#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ConversationCountdownWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UConversationCountdownWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TimerAnimationName;
    
public:
    UConversationCountdownWidget();

};

