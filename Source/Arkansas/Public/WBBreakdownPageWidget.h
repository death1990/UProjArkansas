#pragma once
#include "CoreMinimal.h"
#include "WorkbenchPageWidget.h"
#include "WBBreakdownPageWidget.generated.h"

class UCartInfoWidget;

UCLASS(Blueprintable, EditInlineNew)
class UWBBreakdownPageWidget : public UWorkbenchPageWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCartInfoWidget* CartInfoWidget;
    
public:
    UWBBreakdownPageWidget();

};

