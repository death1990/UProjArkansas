#pragma once
#include "CoreMinimal.h"
#include "OwCameraModifier.h"
#include "CameraModifier_Xray.generated.h"

UCLASS(Abstract, Blueprintable)
class UCameraModifier_Xray : public UOwCameraModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TemporalAAFilterSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TemporalAACurrentFrameWeight;
    
public:
    UCameraModifier_Xray();

};

