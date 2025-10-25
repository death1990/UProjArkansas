#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ECinematicTestMode.h"
#include "OEICinematicsPerUserSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class OEICINEMATICS_API UOEICinematicsPerUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    ECinematicTestMode CinematicTestMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool OpenSequencerForObsidianToolsSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bEnableVoiceOverEmotionExtension;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoUpdateSequencesOnConversationChange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowGesturesMissingEmphasisPointsInGestureLibrary;
    
    UOEICinematicsPerUserSettings();

};

