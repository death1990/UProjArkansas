#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DCLInventoryData.h"
#include "DebugCharacterInventoryAsset.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UDebugCharacterInventoryAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDCLInventoryData InventoryData;
    
public:
    UDebugCharacterInventoryAsset();

};

