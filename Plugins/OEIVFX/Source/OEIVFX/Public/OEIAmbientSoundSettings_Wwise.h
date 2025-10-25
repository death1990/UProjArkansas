#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "OEIAmbientSoundSettings_Wwise.generated.h"

USTRUCT(BlueprintType)
struct FOEIAmbientSoundSettings_Wwise {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath EmitterPoolWrapper;
    
    OEIVFX_API FOEIAmbientSoundSettings_Wwise();
};

