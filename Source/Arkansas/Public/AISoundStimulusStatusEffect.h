#pragma once
#include "CoreMinimal.h"
#include "ESoundDetectionType.h"
#include "StatusEffect.h"
#include "AISoundStimulusStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UAISoundStimulusStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundStimulusRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundDetectionType SoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AwarenessFromSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StimulusGroupID;
    
public:
    UAISoundStimulusStatusEffect();

};

