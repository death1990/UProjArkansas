#pragma once
#include "CoreMinimal.h"
#include "EBonusItemSortLocation.h"
#include "IndianaUserWidget.h"
#include "ItemStack.h"
#include "Templates/SubclassOf.h"
#include "ItemContainerListWidget.generated.h"

class UItem;
class UItemContainerEntryWidget;
class USliderBase;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UItemContainerListWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBonusItemSortLocation BonusItemSortLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UItem>> PrioritySortItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseQuantitySort;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemStack> LootableItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USliderBase* Slider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* SliderContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemContainerEntryWidget* Entry0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemContainerEntryWidget* Entry1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemContainerEntryWidget* Entry2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemContainerEntryWidget* Entry3;
    
public:
    UItemContainerListWidget();

};

