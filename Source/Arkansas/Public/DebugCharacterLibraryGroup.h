#pragma once
#include "CoreMinimal.h"
#include "DebugCharacterLibraryGroup.generated.h"

class UDebugCharacterLoadout;

USTRUCT(BlueprintType)
struct FDebugCharacterLibraryGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UDebugCharacterLoadout>> Loadouts;
    
public:
    ARKANSAS_API FDebugCharacterLibraryGroup();
};

