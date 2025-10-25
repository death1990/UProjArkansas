#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EUIMarkerType.h"
#include "EntryData.h"
#include "CompassEntryData.generated.h"

UCLASS(Blueprintable)
class UCompassEntryData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUIMarkerType, FEntryData> EntryDataMap;
    
public:
    UCompassEntryData();

};

