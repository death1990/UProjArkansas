#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AudioOneShotSettings.h"
#include "AudioOneShotDataSet.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UAudioOneShotDataSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioOneShotSettings> OneShotSettings;
    
    UAudioOneShotDataSet();

};

