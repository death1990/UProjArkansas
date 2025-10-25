#pragma once
#include "CoreMinimal.h"
#include "IndianaInterfaceUserWidget.h"
#include "ConversationSubtitleWidget.generated.h"

class UOwConversationInstance;
class USubtitlesWidget;

UCLASS(Blueprintable, EditInlineNew)
class UConversationSubtitleWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USubtitlesWidget* Subtitle;
    
public:
    UConversationSubtitleWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnConversationStarted(UOwConversationInstance* ConversationInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnConversationEnded(UOwConversationInstance* ConversationInstance);
    
};

