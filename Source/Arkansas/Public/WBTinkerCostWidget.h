#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "WBTinkerCostWidget.generated.h"

class UWBTinkerCostEntryWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UWBTinkerCostWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWBTinkerCostEntryWidget* CostEntry1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWBTinkerCostEntryWidget* CostEntry2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWBTinkerCostEntryWidget* CostEntry3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWBTinkerCostEntryWidget* CostEntry4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWBTinkerCostEntryWidget* CostEntry5;
    
public:
    UWBTinkerCostWidget();

};

