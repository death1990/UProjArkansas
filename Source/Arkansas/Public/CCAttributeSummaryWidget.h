#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CCAttributeSummaryWidget.generated.h"

class UAttributeSliderGroupWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCCAttributeSummaryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttributeSliderGroupWidget* AttributeSliderGroup1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttributeSliderGroupWidget* AttributeSliderGroup2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttributeSliderGroupWidget* AttributeSliderGroup3;
    
public:
    UCCAttributeSummaryWidget();

};

