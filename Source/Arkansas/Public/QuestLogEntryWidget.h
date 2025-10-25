#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "QuestLogEntryWidget.generated.h"

class UBorder;
class UImage;
class UPanelWidget;
class UQuestIconImage;
class UQuestObjectiveEntryWidget;
class UTextBlockBase;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UQuestLogEntryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* QuestComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* QuestFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* QuestUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeInQuestName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOutQuestName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ContentBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestIconImage* QuestIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* QuestTitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* MentionedTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ObjectivePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* QuestCompletedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* QuestFailedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestObjectiveEntryWidget> ObjectiveClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInitEntries;
    
public:
    UQuestLogEntryWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnSelfAnimFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveAnimFinished();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyUpdatedAnimCalled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyFailedAnimCalled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyFadeOutAnimCalled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyFadeInAnimCalled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyCompletedAnimCalled();
    
};

