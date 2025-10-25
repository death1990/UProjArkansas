#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "DebugCharacterLibraryGroup.h"
#include "ToggleableDebugLoadout.h"
#include "ToggleableDebugStateAsset.h"
#include "CharacterLoaderSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class ARKANSAS_API UCharacterLoaderSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyOnStart;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FToggleableDebugLoadout> LoadoutsToApply;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FToggleableDebugStateAsset> StatesToApply;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugCharacterLibraryGroup> CustomLoadoutGroups;
    
    UCharacterLoaderSettings();

};

