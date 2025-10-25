#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ConversationFactionReadoutWidget.generated.h"

class UReputationReadoutWidget;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UConversationFactionReadoutWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* FactionNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* FactionMoodTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReputationReadoutWidget* PositiveRepReadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReputationReadoutWidget* NegativeRepReadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotificationDisplayTime;
    
public:
    UConversationFactionReadoutWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnHideWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideWidget();
    
};

