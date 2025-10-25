#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "MapTextEntryData.h"
#include "MapTextData.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UMapTextData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapTextEntryData> MapTextEntries;
    
    UMapTextData();

};

