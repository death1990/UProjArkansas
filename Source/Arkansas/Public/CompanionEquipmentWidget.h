#pragma once
#include "CoreMinimal.h"
#include "BaseInventoryItemManagement.h"
#include "ItemStack.h"
#include "ItemViewerInitializer.h"
#include "CompanionEquipmentWidget.generated.h"

class AIndianaAiCharacter;
class UCompanionEquipmentBarWidget;
class UIndianaDragDropOperation;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCompanionEquipmentWidget : public UBaseInventoryItemManagement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCompanionEquipmentBarWidget* EquipmentBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemViewerInitializer WeaponsInitializer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemViewerInitializer ArmorInitializer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AIndianaAiCharacter>> ProhibitedCharacterClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* NoInventoryReasonText;
    
public:
    UCompanionEquipmentWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnItemRemovedFromPlayerInventory(const FItemStack& ItemStack);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAddedToPlayerInventory(const FItemStack& ItemStack);
    
    UFUNCTION(BlueprintCallable)
    void OnDragDrop_EquipItem(UIndianaDragDropOperation* Operation);
    
};

