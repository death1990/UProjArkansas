#pragma once
#include "CoreMinimal.h"
#include "AbilityOverviewChildWidget.h"
#include "MedKitAbilityWidget.generated.h"

class UEquipmentComponent;
class UHorizontalBox;
class UMedKitDrugSlotWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMedKitAbilityWidget : public UAbilityOverviewChildWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MedkitHoldRatioThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMedKitDrugSlotWidget* DrugSlotOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMedKitDrugSlotWidget* DrugSlotTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMedKitDrugSlotWidget* DrugSlotThree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMedKitDrugSlotWidget* DrugSlotFour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* DrugSlotContainer;
    
public:
    UMedKitAbilityWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDrugSlots(UEquipmentComponent* InEquipmentComponent, bool bDoubleDose);
    
};

