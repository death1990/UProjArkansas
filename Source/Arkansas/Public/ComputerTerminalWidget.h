#pragma once
#include "CoreMinimal.h"
#include "ConversationBaseWidget.h"
#include "ComputerTerminalWidget.generated.h"

class UConversationSelectionInfoWidget;
class UInputLabelGroupWidget;
class UOWRichTextBlockBase;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UComputerTerminalWidget : public UConversationBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyTextAnimationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadZoomMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOWRichTextBlockBase* BodyTextblock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ConversationTextScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UConversationSelectionInfoWidget* SidePanelInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelGroup;
    
public:
    UComputerTerminalWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnExitInputAction();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnConversationEnded();
    
};

