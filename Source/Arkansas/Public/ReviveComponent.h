#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Templates/SubclassOf.h"
#include "ReviveComponent.generated.h"

class AIndianaAiCharacter;
class UAnimMontage;
class USpell;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UReviveComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> RevivingCompanionSpell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> RevivingPlayerSpell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayerReviveAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayerReviveCrouchedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayerReviveFallingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayerReviveAnimationP3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayerReviveCrouchedAnimationP3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayerReviveFallingAnimationP3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumCompanionChatterDistance;
    
public:
    UReviveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartRevivalOfPlayer(AIndianaAiCharacter* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void PreStartRevivalOfPlayer(AIndianaAiCharacter* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerRevivingCompanion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompanionRevivingPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    void EndSelfRevivalOfPlayer(UAnimMontage* Montage, bool bInterrupted);
    
};

