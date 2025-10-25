#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "BreakdownGainContainerWidget.generated.h"

class UBreakdownGainEntryWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UBreakdownGainContainerWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakdownGainEntryWidget* BreakdownGainEntry1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakdownGainEntryWidget* BreakdownGainEntry2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakdownGainEntryWidget* BreakdownGainEntry3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakdownGainEntryWidget* BreakdownGainEntry4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakdownGainEntryWidget* BreakdownGainEntry5;
    
public:
    UBreakdownGainContainerWidget();

};

