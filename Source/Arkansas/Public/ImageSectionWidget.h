#pragma once
#include "CoreMinimal.h"
#include "RadialSectionWidget.h"
#include "ImageSectionWidget.generated.h"

class UImage;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UImageSectionWidget : public URadialSectionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
public:
    UImageSectionWidget();

};

