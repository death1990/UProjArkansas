#pragma once
#include "CoreMinimal.h"
#include "ETransactionValidationResult.generated.h"

UENUM(BlueprintType)
enum class ETransactionValidationResult : uint8 {
    Valid,
    PlayerLacksCurrency,
    VendorLacksCurrency,
    NullPlayerInventory,
    VendorLacksInventory,
    VendorInventoryMismatch,
    PlayerInventoryMismatch,
    VendorDoesntBuy,
    CantBuyRestrictedStock,
    CantPawnNoDropItems,
    NoItems,
    CantRepairHealthyItems,
    CantSellStolenItems,
};

