#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "RadialSectionWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class URadialSectionWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustOpacityOnUnusableChanged;
    
public:
    URadialSectionWidget();

};

