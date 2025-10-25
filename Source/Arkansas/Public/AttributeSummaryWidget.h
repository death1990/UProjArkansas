#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "AttributeSummaryWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAttributeSummaryWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UAttributeSummaryWidget();

};

