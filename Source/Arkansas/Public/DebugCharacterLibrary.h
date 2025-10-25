#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DebugCharacterLibraryGroup.h"
#include "DebugCharacterUserLibraryGroup.h"
#include "DebugCharacterLibrary.generated.h"

UCLASS(Blueprintable)
class UDebugCharacterLibrary : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugCharacterLibraryGroup> LoadoutGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugCharacterUserLibraryGroup> UserGroups;
    
public:
    UDebugCharacterLibrary();

};

