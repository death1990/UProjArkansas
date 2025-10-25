#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ItemGroupArray.h"
#include "PickupSpawnerSet.generated.h"

UCLASS(Blueprintable)
class UPickupSpawnerSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemGroupArray> ItemGroups;
    
    UPickupSpawnerSet();

};

