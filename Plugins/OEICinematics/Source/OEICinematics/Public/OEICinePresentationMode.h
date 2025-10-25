#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OEICinePresentationMode.generated.h"

class APawn;
class APlayerController;
class AStageCameraActor;

UCLASS(Abstract, Blueprintable)
class OEICINEMATICS_API UOEICinePresentationMode : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* CachedPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* CachedPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AStageCameraActor* CurrentStageCamera;
    
public:
    UOEICinePresentationMode();

};

