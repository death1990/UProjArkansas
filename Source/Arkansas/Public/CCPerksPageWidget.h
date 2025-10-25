#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CCPerksPageWidget.generated.h"

class UButtonBase;
class UPerkReadoutWidget;
class UPerksListWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCCPerksPageWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPerkReadoutWidget* PerkReadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPerksListWidget* MilitaryPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPerksListWidget* AdventurerPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPerksListWidget* LeadershipPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* PreviousStepButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* NextStepButton;
    
public:
    UCCPerksPageWidget();

};

