#pragma once
#include "CoreMinimal.h"
#include "AmmoTypeDisplay.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "AmmoDisplayWidget.generated.h"

class UAmmoDisplayItem;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UAmmoDisplayWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAmmoDisplayItem> AmmoItemClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* AmmoItemsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAmmoTypeDisplay> AmmoTypeArrayBehavior;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAmmoDisplayItem* CachedHighlightedAmmo;
    
public:
    UAmmoDisplayWidget();

};

