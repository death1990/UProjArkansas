#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DeathBodyTypeAudioEvent.h"
#include "DeathBodyTypeAudioEvents.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UDeathBodyTypeAudioEvents : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeathBodyTypeAudioEvent> AudioEvents;
    
    UDeathBodyTypeAudioEvents();

};

