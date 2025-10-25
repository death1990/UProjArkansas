#pragma once
#include "CoreMinimal.h"
#include "StackSplittingWidget.h"
#include "BreakdownStackSplittingWidget.generated.h"

class UBreakdownGainContainerWidget;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UBreakdownStackSplittingWidget : public UStackSplittingWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakdownGainContainerWidget* BreakdownGainContainer;
    
public:
    UBreakdownStackSplittingWidget();

};

