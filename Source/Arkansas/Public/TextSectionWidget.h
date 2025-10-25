#pragma once
#include "CoreMinimal.h"
#include "RadialSectionWidget.h"
#include "TextSectionWidget.generated.h"

class UPanelWidget;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTextSectionWidget : public URadialSectionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* TextBlock;
    
public:
    UTextSectionWidget();

};

