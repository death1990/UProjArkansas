#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "ResourceItem.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UResourceItem : public UItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ItemMesh;
    
public:
    UResourceItem();

};

