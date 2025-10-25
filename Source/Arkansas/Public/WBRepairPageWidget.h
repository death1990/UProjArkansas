#pragma once
#include "CoreMinimal.h"
#include "WorkbenchPageWidget.h"
#include "WBRepairPageWidget.generated.h"

class UCartInfoWidget;
class URepairUpgradeInfoWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UWBRepairPageWidget : public UWorkbenchPageWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URepairUpgradeInfoWidget* RepairInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCartInfoWidget* CartInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* InfoVerticalBox;
    
public:
    UWBRepairPageWidget();

};

