#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ItemStack.h"
#include "CharacterMedKitWidget.generated.h"

class UEquipmentComponent;
class UHorizontalBox;
class UInputWidget;
class UInvalidationBox;
class UInventoryComponent;
class UMedKitDrugSlotWidget;
class UProgressBar;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCharacterMedKitWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInvalidationBox* MainInvalidationBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* MedKitProgressBar;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputWidget* InputLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* MedKitUsageTextBlock;
    
public:
    UCharacterMedKitWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDrugSlots(UEquipmentComponent* InEquipmentComponent, bool bDoubleDose);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryItemAddedRemoved(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack);
    
};

