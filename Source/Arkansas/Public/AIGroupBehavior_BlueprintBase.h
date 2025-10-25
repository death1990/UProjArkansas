#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AIBehaviorClassUserBehaviorAbortedDelegate.h"
#include "AIBehaviorClassUserBehaviorCompletedDelegate.h"
#include "AIBehaviorClassUserBehaviorLoadClassDataDelegate.h"
#include "AIBehaviorClassUserBehaviorStartedDelegate.h"
#include "AIBehaviorFunctionContext.h"
#include "AIBehaviorFunctionDeferredResultDelegate.h"
#include "AIGroupBehavior.h"
#include "AIGroupBehaviorAlgorithmSelector.h"
#include "AIGroupBehaviorBranchSelector.h"
#include "AIGroupBehaviorMultiRoleSelector.h"
#include "AIGroupBehaviorRoleMask.h"
#include "AIGroupBehaviorRoleSelector.h"
#include "EAIGroupBehaviorAlgorithmState.h"
#include "EAlertState.h"
#include "EQSSelector.h"
#include "EStimulusType.h"
#include "Templates/SubclassOf.h"
#include "AIGroupBehavior_BlueprintBase.generated.h"

class AActor;
class AIndianaAiCharacter;
class AIndianaAiController;
class UAIBehaviorClass;
class UObject;
class UOwConversationInstance;
class UTeamData;

UCLASS(Abstract, Blueprintable)
class ARKANSAS_API UAIGroupBehavior_BlueprintBase : public UAIGroupBehavior {
    GENERATED_BODY()
public:
    UAIGroupBehavior_BlueprintBase();

protected:
    UFUNCTION(BlueprintCallable)
    static bool PushAIBehaviorClassToUserSinkRole(UObject* User, const int32 RoleForContext, UClass* BehaviorClass, const FString& IdentifierGuid, const FAIBehaviorClassUserBehaviorLoadClassData& LoadClassDataDelegate, const FAIBehaviorClassUserBehaviorStarted& StartedDelegate, const FAIBehaviorClassUserBehaviorCompleted& CompletedDelegate, const FAIBehaviorClassUserBehaviorAborted& AbortedDelegate);
    
    UFUNCTION(BlueprintCallable)
    static bool PushAIBehaviorClassToUser(UObject* User, const FAIGroupBehaviorRoleSelector RoleForContext, UClass* BehaviorClass, const FString& IdentifierGuid, const FAIBehaviorClassUserBehaviorLoadClassData& LoadClassDataDelegate, const FAIBehaviorClassUserBehaviorStarted& StartedDelegate, const FAIBehaviorClassUserBehaviorCompleted& CompletedDelegate, const FAIBehaviorClassUserBehaviorAborted& AbortedDelegate);
    
    UFUNCTION(BlueprintCallable)
    void K2_TickSinkRoleActiveBehaviorClass(const int32 Index, const float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void K2_TickRoleActiveBehaviorClass(FAIGroupBehaviorRoleSelector RoleSelector, const float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void K2_SwitchBranch(FAIGroupBehaviorBranchSelector BranchSelector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void K2_SwitchAlgorithmState(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector, EAIGroupBehaviorAlgorithmState& OutState) const;
    
    UFUNCTION(BlueprintCallable)
    void K2_SetRoleTeam(FAIGroupBehaviorRoleSelector RoleSelector, TSubclassOf<UTeamData> InTeamData);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetGroupBehaviorCheckpoint(int32 CheckpointNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetAlgorithmValueVector(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector, FVector Vector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetAlgorithmValueToEQSResult_Role(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector, FEQSSelector EQSSelector, FAIGroupBehaviorRoleSelector EQSOwnerRole) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetAlgorithmValueToEQSResult_Instance(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector, FEQSSelector EQSSelector, AIndianaAiController* EQSOwnerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetAlgorithmValueActor(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector, AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    void K2_SetAIDetectionEnabled(FAIGroupBehaviorRoleSelector RoleSelector, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void K2_RunAlgorithm(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnNPCRemovedFromGroupBehavior(AIndianaAiController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnNPCConversationStart(AIndianaAiController* Controller, UOwConversationInstance* Conversation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnNPCConversationEnd(AIndianaAiController* Controller, UOwConversationInstance* Conversation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnGroupBehaviorTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnGroupBehaviorStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool K2_OnGroupBehaviorReadyToRun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnGroupBehaviorPostGameLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnGroupBehaviorEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnGroupBehaviorAbort();
    
    UFUNCTION(BlueprintCallable)
    void K2_MergeRoleTargetInfo(FAIGroupBehaviorRoleSelector SenderRoleSelector, TArray<FAIGroupBehaviorRoleSelector> ReceivingRoleSelectors, bool bIncludeSinkRole);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsRoleInMask(FAIGroupBehaviorRoleSelector Role, UPARAM(Ref) FAIGroupBehaviorRoleMask& RoleMask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsRoleInConversation(FAIGroupBehaviorRoleSelector RoleSelector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsNPCAssignedToBehavior(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsNPCAssignedRole(AActor* Actor, FAIGroupBehaviorRoleSelector RoleSelector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsBranchActive(FAIGroupBehaviorBranchSelector BranchSelector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsAnyRoleInMask(FAIGroupBehaviorMultiRoleSelector RoleList, UPARAM(Ref) FAIGroupBehaviorRoleMask& RoleMask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsAnyNPCAssignedSinkRole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsAnyNPCAssignedRole(FAIGroupBehaviorRoleSelector RoleSelector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsAllRolesInMask(FAIGroupBehaviorMultiRoleSelector RoleList, UPARAM(Ref) FAIGroupBehaviorRoleMask& RoleMask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsAlgorithmRunning(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsAlgorithmReady(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsAlgorithmEmpty(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool K2_GroupBehaviorCanRun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIndianaAiController* K2_GetSinkRoleController(const int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIndianaAiCharacter* K2_GetSinkRoleCharacter(const int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIBehaviorClass* K2_GetSinkRoleActiveBehaviorClass(const int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIBehaviorClass* K2_GetSinkCandidateActiveBehaviorClass(const int32 Index, AIndianaAiController* InController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIndianaAiController* K2_GetRoleController(FAIGroupBehaviorRoleSelector RoleSelector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIndianaAiCharacter* K2_GetRoleCharacter(FAIGroupBehaviorRoleSelector RoleSelector) const;
    
    UFUNCTION(BlueprintCallable)
    UOwConversationInstance* K2_GetRoleActiveConversation(FAIGroupBehaviorRoleSelector RoleSelector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIBehaviorClass* K2_GetRoleActiveBehaviorClass(FAIGroupBehaviorRoleSelector RoleSelector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 K2_GetNPCCountAssignedSinkRole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 K2_GetNPCAssignedSinkRoleIndex(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_GetNPCAssignedSinkRole(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAIGroupBehaviorRoleSelector K2_GetNPCAssignedRole(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* K2_GetKitObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 K2_GetGroupBehaviorCheckpoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIBehaviorClass* K2_GetCandidateActiveBehaviorClass(FAIGroupBehaviorRoleSelector RoleSelector, AIndianaAiController* InController) const;
    
    UFUNCTION(BlueprintCallable)
    UAIBehaviorClass* K2_GetBehaviorClassForSinkRole(const int32 Index, TSubclassOf<UAIBehaviorClass> BehaviorClassType);
    
    UFUNCTION(BlueprintCallable)
    UAIBehaviorClass* K2_GetBehaviorClassForRole(FAIGroupBehaviorRoleSelector RoleSelector, TSubclassOf<UAIBehaviorClass> BehaviorClassType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector K2_GetAlgorithmValueVector(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector, bool& IsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float K2_GetAlgorithmValueAge(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* K2_GetAlgorithmValueActor(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector, bool& IsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAIGroupBehaviorBranchSelector K2_GetActiveBranch() const;
    
    UFUNCTION(BlueprintCallable)
    void K2_ForceRoleTargetDetection(FAIGroupBehaviorRoleSelector RoleSelector, AActor* DetectedActor, EStimulusType StimulusType, EAlertState RequestedAlertState, float RequestedAwareness, float RequestedAwarenessChange, const FVector ExternalStimulusLocation);
    
    UFUNCTION(BlueprintCallable)
    void K2_FinishGroupBehavior(const bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void K2_DropSinkRoleFromGroupBehavior(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void K2_DropRoleFromGroupBehavior(FAIGroupBehaviorRoleSelector RoleSelector);
    
    UFUNCTION(BlueprintCallable)
    void K2_DropNPCFromGroupBehavior(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void K2_DropAllSinkRolesFromGroupBehavior();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Construction();
    
    UFUNCTION(BlueprintCallable)
    void K2_ClearRoleTeam(FAIGroupBehaviorRoleSelector RoleSelector);
    
    UFUNCTION(BlueprintCallable)
    void K2_ClearRoleMask(UPARAM(Ref) FAIGroupBehaviorRoleMask& RoleMask);
    
    UFUNCTION(BlueprintCallable)
    void K2_ClearRoleFromMask(FAIGroupBehaviorRoleSelector Role, UPARAM(Ref) FAIGroupBehaviorRoleMask& RoleMask);
    
    UFUNCTION(BlueprintCallable)
    void K2_ClearMultipleRolesFromMask(FAIGroupBehaviorMultiRoleSelector RoleList, UPARAM(Ref) FAIGroupBehaviorRoleMask& RoleMask);
    
    UFUNCTION(BlueprintCallable)
    void K2_ClearBehaviorClassesForSinkRole();
    
    UFUNCTION(BlueprintCallable)
    void K2_ClearBehaviorClassesForRole(FAIGroupBehaviorRoleSelector RoleSelector);
    
    UFUNCTION(BlueprintCallable)
    void K2_ClearAllBehaviorClasses();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_ClearAlgorithmValue(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector) const;
    
    UFUNCTION(BlueprintCallable)
    void K2_AddRoleToMask(FAIGroupBehaviorRoleSelector Role, UPARAM(Ref) FAIGroupBehaviorRoleMask& RoleMask);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddMultipleRolesToMask(FAIGroupBehaviorMultiRoleSelector RoleList, UPARAM(Ref) FAIGroupBehaviorRoleMask& RoleMask);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="OutWorldContext"))
    static void CreateContextForInstanceWithDelegate(UObject* Instance, const FAIGroupBehaviorRoleSelector RoleForContext, const FAIBehaviorFunctionDeferredResult& OnDeferredResult, FAIBehaviorFunctionContext& OutContext, UObject*& OutWorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="OutWorldContext"))
    static void CreateContextForInstanceSinkRoleWithDelegate(UObject* Instance, const int32 RoleForContext, const FAIBehaviorFunctionDeferredResult& OnDeferredResult, FAIBehaviorFunctionContext& OutContext, UObject*& OutWorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="OutWorldContext"))
    static void CreateContextForInstanceSinkRole(UObject* Instance, const int32 RoleForContext, FAIBehaviorFunctionContext& OutContext, UObject*& OutWorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="OutWorldContext"))
    static void CreateContextForInstance(UObject* Instance, const FAIGroupBehaviorRoleSelector RoleForContext, FAIBehaviorFunctionContext& OutContext, UObject*& OutWorldContext);
    
};

