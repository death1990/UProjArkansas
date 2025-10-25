#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DeathClassRow.h"
#include "DeathClassData.generated.h"

UCLASS(Blueprintable)
class UDeathClassData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeathClassRow> ClassTypeData;
    
    UDeathClassData();

};

