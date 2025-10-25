#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CharacterDetailsWidget.generated.h"

class UCharacterDerivedStatsWidget;
class UCharacterDescriptionPanel;
class UCharacterStatusEffectsWidget;
class UFlavorTextWidget;
class UInputLabelGroupWidget;
class UStatsFlawSummaryWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCharacterDetailsWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterDerivedStatsWidget* DerivedStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterStatusEffectsWidget* StatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsFlawSummaryWidget* FlawSummary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterDescriptionPanel* DescriptionPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlavorTextWidget* FlavorTextWidget;
    
public:
    UCharacterDetailsWidget();

};

