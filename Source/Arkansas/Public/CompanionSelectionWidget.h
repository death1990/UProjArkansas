#pragma once
#include "CoreMinimal.h"
#include "CompanionSelectionCanceledSignatureDelegate.h"
#include "CompanionSelectionConfirmedSignatureDelegate.h"
#include "IndianaInterfaceUserWidget.h"
#include "CompanionSelectionWidget.generated.h"

class ACompanionSelectionStage;
class UActorRenderWidget;
class UCompanionEntryWidget;
class UInputLabelGroupWidget;
class UInputLabelWidget;
class UPanelWidget;
class UPlayerStatsWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCompanionSelectionWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompanionSelectionConfirmedSignature OnCompanionSelectionConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompanionSelectionCanceledSignature OnCompanionSelectionCanceled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorRenderWidget* CompanionsRenderWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* CompanionEntryContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerStatsWidget* PlayerStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelWidget* ExitLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACompanionSelectionStage* Stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCompanionEntryWidget*> CompanionWidgets;
    
public:
    UCompanionSelectionWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterSelectionFailed(int32 WidgetIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterSelectionChanged(int32 WidgetIndex, bool bSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterSelectabilityChanged(int32 WidgetIndex, bool bSelectable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterFocusChanged(int32 WidgetIndex, bool bFocused);
    
};

