#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "StatusEffectBarWidget.generated.h"

class UStatusEffectBarEntryWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UStatusEffectBarWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusEffectBarEntryWidget* StatusEffectEntryOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusEffectBarEntryWidget* StatusEffectEntryTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusEffectBarEntryWidget* StatusEffectEntryThree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusEffectBarEntryWidget* StatusEffectEntryFour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusEffectBarEntryWidget* StatusEffectEntryFive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusEffectBarEntryWidget* StatusEffectEntrySix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatusBlockAnimDistance;
    
public:
    UStatusEffectBarWidget();

};

