#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ConversationSpeakerReadoutWidget.generated.h"

class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UConversationSpeakerReadoutWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* SpeakerNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* SpeakerMoodTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotificationDisplayTime;
    
public:
    UConversationSpeakerReadoutWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnHideWidget();
    
};

