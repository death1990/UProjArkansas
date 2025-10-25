#pragma once
#include "CoreMinimal.h"
#include "ECameraAngle.h"
#include "ECameraPosition.h"
#include "ECameraPositonOffset.h"
#include "ECameraShot.h"
#include "EMarkType.h"
#include "StageCameraLabelSettings.generated.h"

USTRUCT(BlueprintType)
struct FStageCameraLabelSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraShot CameraShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMarkType CameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraPosition CameraPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMarkType CameraPositionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraPositonOffset CameraPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraAngle CameraAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StageCameraName;
    
    OEICINEMATICS_API FStageCameraLabelSettings();
};

