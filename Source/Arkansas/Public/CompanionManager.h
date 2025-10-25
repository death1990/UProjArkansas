#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EBoolResult -FallbackName=EBoolResult
#include "ECompanionSlot.h"
#include "ESpecialObsidianID.h"
#include "OnCompanionRegistrationChangeDelegate.h"
#include "Templates/SubclassOf.h"
#include "CompanionManager.generated.h"

class UAccessory;

UCLASS(Blueprintable)
class UCompanionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompanionRegistrationChange OnCompanionRegistrationChange;
    
    UCompanionManager();

    UFUNCTION(BlueprintCallable, Exec)
    static void UnlockCompanionBP(ESpecialObsidianID Companion);
    
    UFUNCTION(BlueprintCallable)
    static void SetRequestedCompanionsBP(ESpecialObsidianID LeftCompanion, ESpecialObsidianID RightCompanion);
    
    UFUNCTION(BlueprintCallable, Exec)
    static void SetCompanionWantsToTalk(ESpecialObsidianID Companion, bool bWantsToTalk);
    
    UFUNCTION(BlueprintCallable)
    static void SetCompanionAccessory_BP(ESpecialObsidianID CompanionID, TSubclassOf<UAccessory> ItemType, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    static void SetCompanionAccessory(FName CompanionName, FName AccessoryName, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceCompanionInSlot(ESpecialObsidianID CompanionID, ECompanionSlot CommpanionSlot);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCompanionUnlocked(ESpecialObsidianID Companion, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCompanionInRequestedParty(ESpecialObsidianID Companion, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCompanionInActiveParty(ESpecialObsidianID Companion, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCompanionDismissed(ESpecialObsidianID Companion, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool HasPlayerUnlockedCompanions(EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCompanionWantsToTalk(ESpecialObsidianID Companion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetCompanionGuid(ESpecialObsidianID SpecialID);
    
};

