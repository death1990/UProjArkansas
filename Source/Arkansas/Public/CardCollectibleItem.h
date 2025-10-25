#pragma once
#include "CoreMinimal.h"
#include "CardDetail.h"
#include "Item.h"
#include "CardCollectibleItem.generated.h"

class UMaterialInterface;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCardCollectibleItem : public UItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCardDetail CardDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ItemMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UMaterialInterface>> ItemMeshMaterialOverrides;
    
public:
    UCardCollectibleItem();

};

