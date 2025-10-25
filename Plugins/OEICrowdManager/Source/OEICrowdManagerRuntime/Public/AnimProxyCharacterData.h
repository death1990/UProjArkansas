#pragma once
#include "CoreMinimal.h"
#include "AnimProxyCharacterData.generated.h"

class AOEIPassiveAnimProxy;
class UAnimationProxyData;

USTRUCT(BlueprintType)
struct FAnimProxyCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInSharedProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationProxyData* AnimationProxyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AOEIPassiveAnimProxy> AnimProxyIn;
    
    OEICROWDMANAGERRUNTIME_API FAnimProxyCharacterData();
};

