#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CharacterStatusEffectsWidget.generated.h"

class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCharacterStatusEffectsWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ContentPanel;
    
public:
    UCharacterStatusEffectsWidget();

};

