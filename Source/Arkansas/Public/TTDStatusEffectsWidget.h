#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "TTDStatusEffectsWidget.generated.h"

class UHorizontalBox;
class UStatusEffectTagEntryWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTTDStatusEffectsWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* StatusEffectsHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffectTagEntryWidget> StatusEffectEntryClass;
    
public:
    UTTDStatusEffectsWidget();

};

