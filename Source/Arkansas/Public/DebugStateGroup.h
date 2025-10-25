#pragma once
#include "CoreMinimal.h"
#include "DebugStateGroup.generated.h"

class UDebugCharacterStateAsset;

USTRUCT(BlueprintType)
struct FDebugStateGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDebugCharacterStateAsset>> StateAssets;
    
public:
    ARKANSAS_API FDebugStateGroup();
};

