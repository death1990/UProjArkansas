#pragma once
#include "CoreMinimal.h"
#include "CharacterSpawner.h"
#include "EncounterSpawnerDisableConditions.h"
#include "AnimatedCharacterSpawner.generated.h"

class UAnimMontage;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ARKANSAS_API AAnimatedCharacterSpawner : public ACharacterSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* AnimationSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OpeningMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ClosingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStayOpenWhenCapped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationDeactivationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnticipationDelay;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterSpawnerDisableConditions DisableConditions;
    
    AAnimatedCharacterSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldStayOpenWhenCapped() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnerOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnerEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnerDisable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnerClosing();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnerAnticipateOpening(float AnticipationTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSerializeOpen(bool bOpen);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationStarted(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationComplete(UAnimMontage* AnimMontage, bool bInterrupted);
    
};

