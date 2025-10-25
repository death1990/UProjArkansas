#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DCLEquipmentData.h"
#include "DebugCharacterLoadoutEquipmentAsset.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UDebugCharacterLoadoutEquipmentAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDCLEquipmentData EquipmentData;
    
    UDebugCharacterLoadoutEquipmentAsset();

};

