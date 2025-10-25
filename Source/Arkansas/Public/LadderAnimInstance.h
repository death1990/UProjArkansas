#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "LadderAnimInstance.generated.h"

class AIndianaPlayerCharacter;
class UAnimSequence;
class UPlayerLadderAnimationSet;
class UPlayerLadderAnimations;

UCLASS(Blueprintable, NonTransient)
class ARKANSAS_API ULadderAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerLadderAnimations* LadderAnimationData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIndianaPlayerCharacter* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerLadderAnimationSet* CurrentAnimationSet;
    
public:
    ULadderAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerPerspectiveChanged(bool bIsInThirdPerson);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetSlideStopSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetSlideStartRightSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetSlideStartLeftSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetSlideIdleSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetSlideExitSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetRightStopSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetRightIdleSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetLeftStopSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetLeftIdleSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetIdleSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetClimbRightToLeftSprintSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetClimbRightToLeftSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetClimbLeftToRightSprintSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetClimbLeftToRightSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetBottomRightExitSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetBottomLeftExitSequence() const;
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnLadderStartExit();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnLadderExitAnimEnded();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ClimbRightToLeftAnimStarted();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ClimbLeftToRightAnimStarted();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ClimbAnimEnded();
    
};

