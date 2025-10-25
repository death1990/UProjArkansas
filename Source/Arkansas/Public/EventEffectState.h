#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkPlaySoundStatePair.h"
#include "NewPlayFxPair.h"
#include "PlayFxPair.h"
#include "VariableCollection.h"
#include "EventEffectState.generated.h"

class UEventEffect;

UCLASS(Blueprintable, DefaultToInstanced)
class UEventEffectState : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAkPlaySoundStatePair> PlayAkSoundStateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPlayFxPair> PlayFxStateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FNewPlayFxPair> NewPlayFXStateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UEventEffect*, FVariableCollection> EventEffectStateMap;
    
public:
    UEventEffectState();

};

