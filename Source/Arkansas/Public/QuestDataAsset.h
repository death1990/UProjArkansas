#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EQuestLocation.h"
#include "QuestDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UQuestDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EQuestLocation, TSoftObjectPtr<UTexture2D>> QuestImages;
    
    UQuestDataAsset();

};

