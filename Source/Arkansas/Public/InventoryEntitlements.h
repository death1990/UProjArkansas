#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "InventoryEntitlement.h"
#include "InventoryEntitlements.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UInventoryEntitlements : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryEntitlement> Entitlements;
    
    UInventoryEntitlements();

};

