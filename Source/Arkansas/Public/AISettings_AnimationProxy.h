#pragma once
#include "CoreMinimal.h"
#include "AISettings_Behavior.h"
#include "EAIMovementState.h"
#include "AISettings_AnimationProxy.generated.h"

class AAnimationProxyActor;
class UAnimationProxyComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UAISettings_AnimationProxy : public UAISettings_Behavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAnimationProxyActor* AnimationProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AAnimationProxyActor> AnimationProxyPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIMovementState MovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavigationFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimationProxyComponent> AnimationProxyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteDuration;
    
public:
    UAISettings_AnimationProxy();

};

