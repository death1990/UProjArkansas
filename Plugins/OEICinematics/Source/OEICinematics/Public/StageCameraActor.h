#pragma once
#include "CoreMinimal.h"
#include "Camera\CameraActor.h"

#include "StageCameraAttachmentSettings.h"
#include "StageCameraLabelSettings.h"
#include "StageCameraLookatTrackingSettings.h"
#include "StageCameraActor.generated.h"

class UOEICineCameraComponent;

UCLASS(Blueprintable)
class OEICINEMATICS_API AStageCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageCameraLabelSettings LabelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageCameraAttachmentSettings AttachmentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageCameraLookatTrackingSettings LookatTrackingSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FStageCameraAttachmentSettings OriginalAttachmentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FStageCameraLookatTrackingSettings OriginalLookatTrackingSettings;
    
public:
    AStageCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOEICineCameraComponent* GetCineCameraComponent() const;
    
};

