#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "CollectibleItem.generated.h"

class UObject;
class URPGExaminableData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCollectibleItem : public UItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URPGExaminableData* RPGExaminableData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ItemMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItem* ItemInsideLockbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLockbox;
    
public:
    UCollectibleItem();

};

