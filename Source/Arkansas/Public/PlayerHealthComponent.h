#pragma once
#include "CoreMinimal.h"
#include "AddictionTimer.h"
#include "CurveData.h"
#include "ERestType.h"
#include "HealthComponent.h"
#include "SurvivalTier.h"
#include "Templates/SubclassOf.h"
#include "PlayerHealthComponent.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UAkStateValue;
class UItem;
class UMaterialInterface;
class UPointOfInterestData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerHealthComponent : public UHealthComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LethalHunger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LethalThirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LethalExhaustion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFastTravelHunger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFastTravelThirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFastTravelExhaustion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* ZyraniumMeterRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddictionTimer SmokeAddictionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddictionTimer FoodAddictionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddictionTimer DrugsAddictionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddictionTimer AlcoholAddictionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSurvivalTier> HungerTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSurvivalTier> ThirstTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSurvivalTier> ExhaustionTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItem> DownedItemConsumable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerVeryLowHealthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerLowHealthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerHalfHealthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpeedUpHealthRegen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSlowDownHealthRegen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceInCombatHealingRegen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayerLowHealthSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayerLowHealthStopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayerRegenStartedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayerRegenStoppedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayerDiedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* GameOverActiveStateValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* GameOverInactiveStateValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenFxBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurveData> ParamData;
    
public:
    UPlayerHealthComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SurvivalModeUpdated(bool bSurvivalMode);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void PseudoGod();
    
    UFUNCTION(BlueprintCallable)
    void PlayerWaitInitiated(float SecondsPassed, ERestType RestType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void God();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThirst() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxFastTravelThirst() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxFastTravelHunger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxFastTravelExhaustion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLethalThirst() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLethalHunger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLethalExhaustion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHunger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExhaustion() const;
    
    UFUNCTION(BlueprintCallable)
    void FastTravelInitiated(const UPointOfInterestData* TravelData, float TimePassed);
    
    UFUNCTION(BlueprintCallable)
    void AdjustThirst(float Amount, bool bFromFastTravel);
    
    UFUNCTION(BlueprintCallable)
    void AdjustSurvivalStats(float HungerGained, float ThirstGained, float ExhaustionGained, bool bFromFastTravel, bool bForced);
    
    UFUNCTION(BlueprintCallable)
    void AdjustHunger(float Amount, bool bFromFastTravel);
    
    UFUNCTION(BlueprintCallable)
    void AdjustExhaustion(float Amount, bool bFromFastTravel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddThirst(float Thirst);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddHunger(float Hunger);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddExhaustion(float Exhaustion);
    
};

