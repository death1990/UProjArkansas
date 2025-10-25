#pragma once
#include "CoreMinimal.h"
#include "DebugCharacterUserLibraryGroup.generated.h"

class UDebugCharacterLibrary;

USTRUCT(BlueprintType)
struct FDebugCharacterUserLibraryGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugCharacterLibrary* Library;
    
public:
    ARKANSAS_API FDebugCharacterUserLibraryGroup();
};

