#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "AttributeSummaryGroupWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAttributeSummaryGroupWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UAttributeSummaryGroupWidget();

};

