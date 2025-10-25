#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECameraShakePlaySpace -FallbackName=ECameraShakePlaySpace
#include "OwFPVPresentationMode.h"
#include "Templates/SubclassOf.h"
#include "OwMocapFPVPresentationMode.generated.h"

class UCameraShakeBase;

UCLASS(Blueprintable)
class ARKANSAS_API UOwMocapFPVPresentationMode : public UOwFPVPresentationMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> ListeningCameraShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ListeningCameraShakeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraShakePlaySpace ListeningCameraShakeSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraShakeBase* ActiveListeningCameraShake;
    
public:
    UOwMocapFPVPresentationMode();

};

