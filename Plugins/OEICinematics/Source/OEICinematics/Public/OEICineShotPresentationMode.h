#pragma once
#include "CoreMinimal.h"
#include "OEICineTransitioningPresentationMode.h"
#include "OEICinematicShotController.h"
#include "OEICinematicShotDefinition.h"
#include "OEICineShotPresentationMode.generated.h"

UCLASS(Abstract, Blueprintable)
class OEICINEMATICS_API UOEICineShotPresentationMode : public UOEICineTransitioningPresentationMode, public IOEICinematicShotController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOEICinematicShotDefinition Shot;
    
public:
    UOEICineShotPresentationMode();


    // Fix for true pure virtual functions not being implemented
};

