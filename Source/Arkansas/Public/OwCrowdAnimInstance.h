#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIAnimProxyRuntime -ObjectName=AnimationProxyRuntime -FallbackName=AnimationProxyRuntime
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIAnimProxyRuntime -ObjectName=BodyIdle -FallbackName=BodyIdle
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIAnimProxyRuntime -ObjectName=FacialIdle -FallbackName=FacialIdle
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIAnimationRuntime -ObjectName=OEIAnimInstance -FallbackName=OEIAnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICrowdManagerRuntime -ObjectName=OEIMergedCrowdAnimInstance -FallbackName=OEIMergedCrowdAnimInstance
#include "OwCrowdAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ARKANSAS_API UOwCrowdAnimInstance : public UOEIAnimInstance, public IOEIMergedCrowdAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CrowdBodyIdlePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationProxyRuntime AnimProxyRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacialIdle FacialIdle0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacialIdle FacialIdle1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBodyIdle BodyIdle0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBodyIdle BodyIdle1;
    
    UOwCrowdAnimInstance();


    // Fix for true pure virtual functions not being implemented
};

