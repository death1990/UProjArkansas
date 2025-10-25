#pragma once
#include "CoreMinimal.h"
#include "AkPlaySoundState.h"
#include "AkPlaySoundStatePair.generated.h"

class UAkPlaySoundEventEffect;

USTRUCT(BlueprintType)
struct FAkPlaySoundStatePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAkPlaySoundEventEffect> EventEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkPlaySoundState State;
    
    ARKANSAS_API FAkPlaySoundStatePair();
};

