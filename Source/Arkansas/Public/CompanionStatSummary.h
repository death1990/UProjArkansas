#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "OnStatItemHoveredFocusedDelegate.h"
#include "OnStatusEffectItemHoveredFocusedDelegate.h"
#include "Templates/SubclassOf.h"
#include "CompanionStatSummary.generated.h"

class UCharacterStatusEffectsWidget;
class UGenericListEntryWidget;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCompanionStatSummary : public UIndianaUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatItemHoveredFocused OnStatItemHoveredFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatusEffectItemHoveredFocused OnStatusEffectItemHoveredFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGenericListEntryWidget> AdditionalEntryClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowEnergyAsPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericListEntryWidget* HealthStatEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericListEntryWidget* EnergyStatEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericListEntryWidget* AbilityEntryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* TraitInfoPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* TraitEntryPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* AdditionalPerkInfoPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* AdditionalPerkEntryPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterStatusEffectsWidget* CompanionStatusEffects;
    
public:
    UCompanionStatSummary();

};

