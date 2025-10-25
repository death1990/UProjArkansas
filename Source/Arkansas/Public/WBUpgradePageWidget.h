#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WorkbenchPageWidget.h"
#include "WBUpgradePageWidget.generated.h"

class UCartInfoWidget;
class URepairUpgradeInfoWidget;
class UTextBlockBase;
class UTinkeringWidget;

UCLASS(Blueprintable, EditInlineNew)
class UWBUpgradePageWidget : public UWorkbenchPageWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URepairUpgradeInfoWidget* RepairInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCartInfoWidget* CartInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTinkeringWidget> TinkeringClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* DisabledMessage;
    
public:
    UWBUpgradePageWidget();

};

