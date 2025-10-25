#pragma once
#include "CoreMinimal.h"
#include "AmmoPoolBase.h"
#include "Templates/SubclassOf.h"
#include "ConsumableAmmoPool.generated.h"

class UConsumableItem;

UCLASS(Blueprintable, EditInlineNew)
class UConsumableAmmoPool : public UAmmoPoolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UConsumableItem> IntrinsicConsumableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UConsumableItem* CurrentConsumable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UConsumableItem> PendingConsumableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UConsumableItem> LoadingConsumableClass;
    
public:
    UConsumableAmmoPool();

};

