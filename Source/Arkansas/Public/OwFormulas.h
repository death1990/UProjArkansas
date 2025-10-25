#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EBribeDifficulty.h"
#include "ECharacterSkillRange_DEPRACATED.h"
#include "ECreatureXPType.h"
#include "EOCLDifficulty.h"
#include "ESkillDifficultyTier.h"
#include "ETrapDifficulty.h"
#include "Templates/SubclassOf.h"
#include "OwFormulas.generated.h"

class UFactionData;

UCLASS(Abstract, Blueprintable)
class UOwFormulas : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 OCLMinDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 OCLMaxDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LockpickMaxDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HackMinDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HackMaxDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HackMaxDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TrapMinDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TrapMaxDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TrapMaxDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteriorSneakDetectionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExteriorSneakDetectionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumMerchantSkillForDiscount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MerchantDiscountDivisor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PawningValueReductionModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestockFrequencyDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuybackExpirationDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SalePriceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDiscount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinUnlockedGadgetSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeaconFocusAimSimilarityOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeaconFocusAimSimilarityOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandardKeyHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandardDoubleClickTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterrogationSkillCheckXPLimitCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double InterrogationSkillCheckXPLimitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECreatureXPType, float> WeakThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> TierLevelThresholds;
    
    UOwFormulas();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 WorkbenchRepairPartCost(float Durability, int32 ItemLevel, int32 EngineerSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 VendorRepairCurrencyCost(float Durability, int32 ItemLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 TrapToughness(uint8 ExactTrapDifficulty, uint8 PlayerEngineeringSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 TrapDisarmTime(uint8 DisarmDifficulty, uint8 PlayerSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float TrapDisarmNoise(uint8 ExactTrapDifficulty, uint8 PlayerEngineeringSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float TrapDifficultyRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 TrapDifficultyNumRanges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 TrapDifficultyFullRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float TrapDamagePercent(ETrapDifficulty TrapDifficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float TrapArmNoise(uint8 ExactTrapDifficulty, uint8 PlayerEngineeringSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float TameTime(uint8 TameDifficulty, int32 TameSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool ShouldDrawFireSwitchCompanionTargets(float OldHealth, float OldDTBody, float OldDTHead, float NewHealth, float NewDTBody, float NewDTHead) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float PlayerSneakEnemyDetectionRage(bool bInterior, uint8 PlayerSneakSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float PickPocketTime(uint8 PickpocketDifficulty, int32 PickpockSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 MineDisarmTime(uint8 DisarmDifficulty, uint8 PlayerExplosivesSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 LockpickToughness(uint8 ExactLockpickDifficulty, uint8 PlayerLockpickSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float LockpickTime(uint8 ExactLockpickDifficulty, uint8 PlayerLockpickSkill, uint8 BasePlayerLockpickSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 LockpickNumResources(uint8 ExactLockpickDifficulty, uint8 PlayerLockpickSkill, uint8 BasePlayerLockpickSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float LockpickNoise(uint8 ExactLockpickDifficulty, uint8 PlayerLockpickSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float LockpickDifficultyRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 LockpickDifficultyNumRanges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 LockpickDifficultyFullRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 HackToughness(uint8 ExactHackDifficulty, uint8 PlayerHackSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 HackTime(uint8 ExactHackDifficulty, uint8 PlayerHackSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 HackRobotTime(uint8 ExactHackDifficulty, uint8 PlayerHackSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 HackNumResources(uint8 ExactHackDifficulty, uint8 PlayerHackSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float HackNoise(uint8 ExactHackDifficulty, uint8 PlayerHackSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float HackDifficultyRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 HackDifficultyNumRanges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 HackDifficultyFullRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 HackableComponentHackTime(uint8 PlayerHackSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetThreatValue(ECreatureXPType CharXPType, ESkillDifficultyTier CharDifficultyTier, ESkillDifficultyTier WorldDifficultyTier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetRespecCost(int32 NumRespecs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetInterrogationBribeAmount(EBribeDifficulty BribeDifficulty, TSubclassOf<UFactionData> NpcFaction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetBribeAmount(EBribeDifficulty BribeDifficulty, ESkillDifficultyTier SkillDifficultyTier, int32 MerchantSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 FieldRepairPartCost(float Durability, int32 ItemLevel, int32 EngineerSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 DisarmTime(uint8 ExactTrapDifficulty, uint8 PlayerEngineeringSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 ConversationSkillNearMissThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 ConversationNearMissMaxOptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 ConversationAttributeNearMissThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ECharacterSkillRange_DEPRACATED ComputeSkillValueToRange(int32 SkillValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 ComputeSkillPointsForSecondaryAttribute(uint8 AttributeRank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 ComputeSkillPointsForPrimaryAttribute(uint8 AttributeRank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float ComputeFallingDamagePercent(float DistanceFallen) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 ComputeExactTrapDifficulty(ETrapDifficulty TrapDifficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 ComputeExactLockpickDifficulty(EOCLDifficulty LockpickDifficulty, ESkillDifficultyTier SkillDifficultyTier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 ComputeExactHackDifficulty(EOCLDifficulty HackDifficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CanPickpocket(uint8 PickpocketDifficulty, uint8 PickpocketSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CanLockpick(uint8 ExactLockpickDifficulty, uint8 PlayerLockpickSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CanHack(uint8 ExactComputerDifficulty, uint8 PlayerHackSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CanDisarm(uint8 ExactTrapDifficulty, uint8 PlayerEngineeringSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CanArm(uint8 ExactTrapDifficulty, uint8 PlayerEngineeringSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CalculateTier3Count(const int32 ScienceSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CalculateTier2Count(const int32 ScienceSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CalculateTier1Count(const int32 ScienceSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CalculatePartsRecoveredOnBreakdown(float Durability, int32 ItemLevel, bool bFieldBreakdown) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalculateMoraleAdjustment(float AddedMoral, int32 CharmAttribute, int32 TemperamentAttribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalculateMerchantSkillDiscount(int32 MerchantSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalculateItemBasePrice(int32 BasePrice, bool bPristine, float Condition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalculateIntialMorale(int32 TemperamentAttribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BaseRepairPartCost(float Durability, int32 ItemLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 ArmTime(uint8 ExactTrapDifficulty, uint8 PlayerEngineeringSkill) const;
    
};

