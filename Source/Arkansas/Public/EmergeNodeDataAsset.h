#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EmergeNodeDataAsset.generated.h"

class AIndianaAiCharacter;

UCLASS(Blueprintable)
class ARKANSAS_API UEmergeNodeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AIndianaAiCharacter>, int32> ActorsToSpawn;
    
    UEmergeNodeDataAsset();

};

