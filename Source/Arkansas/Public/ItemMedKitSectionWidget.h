#pragma once
#include "CoreMinimal.h"
#include "RadialSectionWidget.h"
#include "ItemMedKitSectionWidget.generated.h"

class UImage;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UItemMedKitSectionWidget : public URadialSectionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
public:
    UItemMedKitSectionWidget();

};

