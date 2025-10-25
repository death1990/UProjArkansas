#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIAnimProxyRuntime -ObjectName=AnimationProxyRuntime -FallbackName=AnimationProxyRuntime
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIAnimProxyRuntime -ObjectName=BodyIdle -FallbackName=BodyIdle
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIAnimProxyRuntime -ObjectName=FacialIdle -FallbackName=FacialIdle
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIAnimationRuntime -ObjectName=OEIAnimInstance -FallbackName=OEIAnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIAnimationRuntime -ObjectName=RelativeIKConfig -FallbackName=RelativeIKConfig
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIAnimationRuntime -ObjectName=RelativeIKConfigProviderInterface -FallbackName=RelativeIKConfigProviderInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICharacterCustomization -ObjectName=BreakBoneInfo -FallbackName=BreakBoneInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICharacterCustomization -ObjectName=OEICCAnimInterface -FallbackName=OEICCAnimInterface
#include "AnimatedIKData.h"
#include "BreakBoneInfo_Legacy.h"
#include "EFootID.h"
#include "LocomotionAnimInstanceRuntimeData.h"
#include "LocomotionAnimationState.h"
#include "OwAnimInstance.generated.h"

class UAnimMontage;
class ULocomotionAnimationData;
class ULocomotionLogicComponent;

UCLASS(Blueprintable, NonTransient)
class UOwAnimInstance : public UOEIAnimInstance, public IRelativeIKConfigProviderInterface, public IOEICCAnimInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSpeedIsRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBreakBoneInfo_Legacy> BreakBoneConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBreakBoneInfo> NewBreakBoneConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IKLeftHandAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IKRightHandAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AltHandIKLeftAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AltHandIKRightAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IKBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float UnscaledIKLeftHandAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float UnscaledIKRightHandAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentIKStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DisableIKBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimatedIKData LeftWristData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimatedIKData RightWristData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootDownDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootUpDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, EFootID> GameplayTagToFootID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFootIKEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFootIKState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IKInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LegIKStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRelativeIKConfig> RelativeIKConfigs;
    
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
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLocomotionAnimationState LocoAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToLookAheadForLeansForWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToLookAheadForLeansForRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocomotionAnimationData* DefaultLocomotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocomotionAnimationData* DefaultCombatLocomotionAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBlendLocomotionStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULocomotionAnimationData* CombatLocomotionAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULocomotionAnimationData* NonCombatLocomotionAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULocomotionLogicComponent* LocomotionController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLocomotionAnimInstanceRuntimeData CombatLocomotionRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLocomotionAnimInstanceRuntimeData NonCombatLocomotionRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLocomotionActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SlopeAdditiveAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlopeAdditiveAlphaInterpSpeed;
    
    UOwAnimInstance();

    UFUNCTION(BlueprintCallable)
    float Montage_SkipToEnd(UAnimMontage* MontageToPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyRootMotionMontagePlaying() const;
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ToggleFootIK();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_EnableFootIK();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_DisableFootIK();
    

    // Fix for true pure virtual functions not being implemented
};

