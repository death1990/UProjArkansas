#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIAnimProxyRuntime -ObjectName=PropAnimationPlayer -FallbackName=PropAnimationPlayer
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICrowdManagerRuntime -ObjectName=OEIPassiveAnimProxy -FallbackName=OEIPassiveAnimProxy
#include "ConditionalVolumeIndex.h"
#include "LinkedAnimProxy.h"
#include "OwAnimationProxyActor.generated.h"

class UObsidianIDComponent;
class UOwNavModifierComponent;

UCLASS(Blueprintable)
class ARKANSAS_API AOwAnimationProxyActor : public AOEIPassiveAnimProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOwNavModifierComponent* NavModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNavModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropAnimationPlayer PropAnimationPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference PropComponentReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* IDComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinkedAnimProxy> LinkedAnimProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AutomaticLinkedAnimProxiesSubStateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutomaticLinkedAnimProxiesRange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionalVolumeIndex> ConditionalVolumes;
    
public:
    AOwAnimationProxyActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimProxyCompleteBP();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimProxyComplete();
    
};

