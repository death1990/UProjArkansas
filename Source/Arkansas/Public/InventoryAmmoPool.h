#pragma once
#include "CoreMinimal.h"
#include "AmmoPoolBase.h"
#include "ItemStack.h"
#include "OnAllAmmoTypePoolUpdatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "InventoryAmmoPool.generated.h"

class UAmmo;
class UInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UInventoryAmmoPool : public UAmmoPoolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllAmmoTypePoolUpdated OnAllAmmoTypePoolUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAmmo> DefaultAmmoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UAmmo>> ForbiddenAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAllAmmoTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAmmo* CurrentAmmo;
    
public:
    UInventoryAmmoPool();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAllAmmoTypePool();
    
    UFUNCTION(BlueprintCallable)
    void OnItemRemovedFromInventory(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack);
    
    UFUNCTION(BlueprintCallable)
    void OnItemCountChangedInInventory(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAddedToInventory(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack);
    
};

