#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "OnPlayerAptitudeItemHoveredFocusedDelegate.h"
#include "OnPlayerFlawItemHoveredFocusedDelegate.h"
#include "OnPlayerPerkItemHoveredFocusedDelegate.h"
#include "OnPlayerStatItemHoveredFocusedDelegate.h"
#include "OnPlayerStatusEffectItemHoveredFocusedDelegate.h"
#include "OnPlayerTraitItemHoveredFocusedDelegate.h"
#include "Templates/SubclassOf.h"
#include "PlayerStatSummary.generated.h"

class UCharacterStatusEffectsWidget;
class UGenericFlawListEntryWidget;
class UGenericListEntryWidget;
class UGenericPerkListEntryWidget;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPlayerStatSummary : public UIndianaUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStatItemHoveredFocused OnStatItemHoveredFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStatusEffectItemHoveredFocused OnStatusEffectItemHoveredFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerAptitudeItemHoveredFocused OnAptitudeItemHoveredFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerTraitItemHoveredFocused OnTraitItemHoveredFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerFlawItemHoveredFocused OnFlawItemHoveredFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPerkItemHoveredFocused OnPerkItemHoveredFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGenericFlawListEntryWidget> AdditionalFlawEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGenericPerkListEntryWidget> AdditionalPerkEntryClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowToxicityMaxWithZyranium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMaxToxicityWhenReduced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericListEntryWidget* HealthStatEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericListEntryWidget* XpStatEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericListEntryWidget* GadgetStatEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericListEntryWidget* ToxicityStatEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* BackgroundInfoPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericListEntryWidget* BackgroundEntryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* TraitInfoPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* TraitEntryPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* FlawInfoPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* FlawEntryPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterStatusEffectsWidget* CharacterStatusEffects;
    
public:
    UPlayerStatSummary();

};

