#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "ReputationSummaryWidget.generated.h"

class UButtonGroup;
class UFactionData;
class UFlavorTextWidget;
class UInputLabelGroupWidget;
class UPanelWidget;
class UReputationDetailsWidget;
class UReputationEntryWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UReputationSummaryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UReputationEntryWidget> EntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* FactionsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReputationDetailsWidget* Details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlavorTextWidget* FlavorTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UButtonGroup* ButtonGroup;
    
public:
    UReputationSummaryWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFactionEncountered(const UFactionData* FactionData);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitReputationBackgroundOnMaximize();
    
};

