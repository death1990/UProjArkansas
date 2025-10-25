#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CombinedCrosshairParameterStruct.h"
#include "CrosshairStates.h"
#include "EReticleType.h"
#include "ReticleVisualsDataAsset.generated.h"

UCLASS(Blueprintable)
class UReticleVisualsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrosshairStates States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombinedCrosshairParameterStruct CrosshairParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultReticleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReticleType DefaultReticleType;
    
    UReticleVisualsDataAsset();

};

