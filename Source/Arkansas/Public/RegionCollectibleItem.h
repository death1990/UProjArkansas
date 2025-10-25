#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "RegionCollectibleItem.generated.h"

class UObject;
class UTravelRegionData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class URegionCollectibleItem : public UItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ItemMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTravelRegionData* RegionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeAddedToJunk;
    
public:
    URegionCollectibleItem();

};

