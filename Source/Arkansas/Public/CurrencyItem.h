#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "CurrencyItem.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCurrencyItem : public UItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ItemMesh;
    
public:
    UCurrencyItem();

};

