#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "SettingsMenuVisualizerBaseWidget.h"
#include "SubtitleVisualizerWidget.generated.h"

class USubtitlesWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USubtitleVisualizerWidget : public USettingsMenuVisualizerBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USubtitlesWidget* Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString SpeakerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString SubtitleText;
    
public:
    USubtitleVisualizerWidget();

};

