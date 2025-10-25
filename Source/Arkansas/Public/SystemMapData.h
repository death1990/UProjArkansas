#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SystemMapEntryData.h"
#include "SystemMapData.generated.h"

UCLASS(Blueprintable)
class USystemMapData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSystemMapEntryData> SystemEntries;
    
public:
    USystemMapData();

};

