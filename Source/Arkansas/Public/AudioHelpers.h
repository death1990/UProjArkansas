#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AudioHelpers.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class UAudioHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioHelpers();

    UFUNCTION(BlueprintCallable)
    static UAkAudioEvent* LoadAkAudioEventReference(const FString& Path);
    
};

