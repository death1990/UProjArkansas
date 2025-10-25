#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CombinedSettingCategory.h"
#include "OwSettingsList.generated.h"

UCLASS(Blueprintable)
class UOwSettingsList : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCombinedSettingCategory> CombinedSettingsList;
    
public:
    UOwSettingsList();

};

