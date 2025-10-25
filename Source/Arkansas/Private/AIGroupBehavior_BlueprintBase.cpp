#include "AIGroupBehavior_BlueprintBase.h"
#include "Templates/SubclassOf.h"

UAIGroupBehavior_BlueprintBase::UAIGroupBehavior_BlueprintBase() {
}

bool UAIGroupBehavior_BlueprintBase::PushAIBehaviorClassToUserSinkRole(UObject* User, const int32 RoleForContext, UClass* BehaviorClass, const FString& IdentifierGuid, const FAIBehaviorClassUserBehaviorLoadClassData& LoadClassDataDelegate, const FAIBehaviorClassUserBehaviorStarted& StartedDelegate, const FAIBehaviorClassUserBehaviorCompleted& CompletedDelegate, const FAIBehaviorClassUserBehaviorAborted& AbortedDelegate) {
    return false;
}

bool UAIGroupBehavior_BlueprintBase::PushAIBehaviorClassToUser(UObject* User, const FAIGroupBehaviorRoleSelector RoleForContext, UClass* BehaviorClass, const FString& IdentifierGuid, const FAIBehaviorClassUserBehaviorLoadClassData& LoadClassDataDelegate, const FAIBehaviorClassUserBehaviorStarted& StartedDelegate, const FAIBehaviorClassUserBehaviorCompleted& CompletedDelegate, const FAIBehaviorClassUserBehaviorAborted& AbortedDelegate) {
    return false;
}

void UAIGroupBehavior_BlueprintBase::K2_TickSinkRoleActiveBehaviorClass(const int32 Index, const float DeltaSeconds) {
}

void UAIGroupBehavior_BlueprintBase::K2_TickRoleActiveBehaviorClass(FAIGroupBehaviorRoleSelector RoleSelector, const float DeltaSeconds) {
}

void UAIGroupBehavior_BlueprintBase::K2_SwitchBranch(FAIGroupBehaviorBranchSelector BranchSelector) {
}

void UAIGroupBehavior_BlueprintBase::K2_SwitchAlgorithmState(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector, EAIGroupBehaviorAlgorithmState& OutState) const {
}

void UAIGroupBehavior_BlueprintBase::K2_SetRoleTeam(FAIGroupBehaviorRoleSelector RoleSelector, TSubclassOf<UTeamData> InTeamData) {
}

void UAIGroupBehavior_BlueprintBase::K2_SetGroupBehaviorCheckpoint(int32 CheckpointNumber) {
}

void UAIGroupBehavior_BlueprintBase::K2_SetAlgorithmValueVector(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector, FVector Vector) const {
}

void UAIGroupBehavior_BlueprintBase::K2_SetAlgorithmValueToEQSResult_Role(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector, FEQSSelector EQSSelector, FAIGroupBehaviorRoleSelector EQSOwnerRole) const {
}

void UAIGroupBehavior_BlueprintBase::K2_SetAlgorithmValueToEQSResult_Instance(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector, FEQSSelector EQSSelector, AIndianaAiController* EQSOwnerController) const {
}

void UAIGroupBehavior_BlueprintBase::K2_SetAlgorithmValueActor(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector, AActor* Actor) const {
}

void UAIGroupBehavior_BlueprintBase::K2_SetAIDetectionEnabled(FAIGroupBehaviorRoleSelector RoleSelector, bool bEnabled) {
}

void UAIGroupBehavior_BlueprintBase::K2_RunAlgorithm(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector) {
}






bool UAIGroupBehavior_BlueprintBase::K2_OnGroupBehaviorReadyToRun_Implementation() const {
    return false;
}




void UAIGroupBehavior_BlueprintBase::K2_MergeRoleTargetInfo(FAIGroupBehaviorRoleSelector SenderRoleSelector, TArray<FAIGroupBehaviorRoleSelector> ReceivingRoleSelectors, bool bIncludeSinkRole) {
}

bool UAIGroupBehavior_BlueprintBase::K2_IsRoleInMask(FAIGroupBehaviorRoleSelector Role, FAIGroupBehaviorRoleMask& RoleMask) {
    return false;
}

bool UAIGroupBehavior_BlueprintBase::K2_IsRoleInConversation(FAIGroupBehaviorRoleSelector RoleSelector) {
    return false;
}

bool UAIGroupBehavior_BlueprintBase::K2_IsNPCAssignedToBehavior(AActor* Actor) const {
    return false;
}

bool UAIGroupBehavior_BlueprintBase::K2_IsNPCAssignedRole(AActor* Actor, FAIGroupBehaviorRoleSelector RoleSelector) const {
    return false;
}

bool UAIGroupBehavior_BlueprintBase::K2_IsBranchActive(FAIGroupBehaviorBranchSelector BranchSelector) const {
    return false;
}

bool UAIGroupBehavior_BlueprintBase::K2_IsAnyRoleInMask(FAIGroupBehaviorMultiRoleSelector RoleList, FAIGroupBehaviorRoleMask& RoleMask) {
    return false;
}

bool UAIGroupBehavior_BlueprintBase::K2_IsAnyNPCAssignedSinkRole() const {
    return false;
}

bool UAIGroupBehavior_BlueprintBase::K2_IsAnyNPCAssignedRole(FAIGroupBehaviorRoleSelector RoleSelector) const {
    return false;
}

bool UAIGroupBehavior_BlueprintBase::K2_IsAllRolesInMask(FAIGroupBehaviorMultiRoleSelector RoleList, FAIGroupBehaviorRoleMask& RoleMask) {
    return false;
}

bool UAIGroupBehavior_BlueprintBase::K2_IsAlgorithmRunning(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector) const {
    return false;
}

bool UAIGroupBehavior_BlueprintBase::K2_IsAlgorithmReady(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector) const {
    return false;
}

bool UAIGroupBehavior_BlueprintBase::K2_IsAlgorithmEmpty(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector) const {
    return false;
}

bool UAIGroupBehavior_BlueprintBase::K2_GroupBehaviorCanRun_Implementation() const {
    return false;
}

AIndianaAiController* UAIGroupBehavior_BlueprintBase::K2_GetSinkRoleController(const int32 Index) const {
    return NULL;
}

AIndianaAiCharacter* UAIGroupBehavior_BlueprintBase::K2_GetSinkRoleCharacter(const int32 Index) const {
    return NULL;
}

UAIBehaviorClass* UAIGroupBehavior_BlueprintBase::K2_GetSinkRoleActiveBehaviorClass(const int32 Index) const {
    return NULL;
}

UAIBehaviorClass* UAIGroupBehavior_BlueprintBase::K2_GetSinkCandidateActiveBehaviorClass(const int32 Index, AIndianaAiController* InController) const {
    return NULL;
}

AIndianaAiController* UAIGroupBehavior_BlueprintBase::K2_GetRoleController(FAIGroupBehaviorRoleSelector RoleSelector) const {
    return NULL;
}

AIndianaAiCharacter* UAIGroupBehavior_BlueprintBase::K2_GetRoleCharacter(FAIGroupBehaviorRoleSelector RoleSelector) const {
    return NULL;
}

UOwConversationInstance* UAIGroupBehavior_BlueprintBase::K2_GetRoleActiveConversation(FAIGroupBehaviorRoleSelector RoleSelector) {
    return NULL;
}

UAIBehaviorClass* UAIGroupBehavior_BlueprintBase::K2_GetRoleActiveBehaviorClass(FAIGroupBehaviorRoleSelector RoleSelector) const {
    return NULL;
}

int32 UAIGroupBehavior_BlueprintBase::K2_GetNPCCountAssignedSinkRole() const {
    return 0;
}

int32 UAIGroupBehavior_BlueprintBase::K2_GetNPCAssignedSinkRoleIndex(AActor* Actor) const {
    return 0;
}

bool UAIGroupBehavior_BlueprintBase::K2_GetNPCAssignedSinkRole(AActor* Actor) const {
    return false;
}

FAIGroupBehaviorRoleSelector UAIGroupBehavior_BlueprintBase::K2_GetNPCAssignedRole(AActor* Actor) const {
    return FAIGroupBehaviorRoleSelector{};
}

UObject* UAIGroupBehavior_BlueprintBase::K2_GetKitObject() const {
    return NULL;
}

int32 UAIGroupBehavior_BlueprintBase::K2_GetGroupBehaviorCheckpoint() const {
    return 0;
}

UAIBehaviorClass* UAIGroupBehavior_BlueprintBase::K2_GetCandidateActiveBehaviorClass(FAIGroupBehaviorRoleSelector RoleSelector, AIndianaAiController* InController) const {
    return NULL;
}

UAIBehaviorClass* UAIGroupBehavior_BlueprintBase::K2_GetBehaviorClassForSinkRole(const int32 Index, TSubclassOf<UAIBehaviorClass> BehaviorClassType) {
    return NULL;
}

UAIBehaviorClass* UAIGroupBehavior_BlueprintBase::K2_GetBehaviorClassForRole(FAIGroupBehaviorRoleSelector RoleSelector, TSubclassOf<UAIBehaviorClass> BehaviorClassType) {
    return NULL;
}

FVector UAIGroupBehavior_BlueprintBase::K2_GetAlgorithmValueVector(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector, bool& IsValid) const {
    return FVector{};
}

float UAIGroupBehavior_BlueprintBase::K2_GetAlgorithmValueAge(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector) const {
    return 0.0f;
}

AActor* UAIGroupBehavior_BlueprintBase::K2_GetAlgorithmValueActor(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector, bool& IsValid) const {
    return NULL;
}

FAIGroupBehaviorBranchSelector UAIGroupBehavior_BlueprintBase::K2_GetActiveBranch() const {
    return FAIGroupBehaviorBranchSelector{};
}

void UAIGroupBehavior_BlueprintBase::K2_ForceRoleTargetDetection(FAIGroupBehaviorRoleSelector RoleSelector, AActor* DetectedActor, EStimulusType StimulusType, EAlertState RequestedAlertState, float RequestedAwareness, float RequestedAwarenessChange, const FVector ExternalStimulusLocation) {
}

void UAIGroupBehavior_BlueprintBase::K2_FinishGroupBehavior(const bool bSuccess) {
}

void UAIGroupBehavior_BlueprintBase::K2_DropSinkRoleFromGroupBehavior(const int32 Index) {
}

void UAIGroupBehavior_BlueprintBase::K2_DropRoleFromGroupBehavior(FAIGroupBehaviorRoleSelector RoleSelector) {
}

void UAIGroupBehavior_BlueprintBase::K2_DropNPCFromGroupBehavior(AActor* Actor) {
}

void UAIGroupBehavior_BlueprintBase::K2_DropAllSinkRolesFromGroupBehavior() {
}


void UAIGroupBehavior_BlueprintBase::K2_ClearRoleTeam(FAIGroupBehaviorRoleSelector RoleSelector) {
}

void UAIGroupBehavior_BlueprintBase::K2_ClearRoleMask(FAIGroupBehaviorRoleMask& RoleMask) {
}

void UAIGroupBehavior_BlueprintBase::K2_ClearRoleFromMask(FAIGroupBehaviorRoleSelector Role, FAIGroupBehaviorRoleMask& RoleMask) {
}

void UAIGroupBehavior_BlueprintBase::K2_ClearMultipleRolesFromMask(FAIGroupBehaviorMultiRoleSelector RoleList, FAIGroupBehaviorRoleMask& RoleMask) {
}

void UAIGroupBehavior_BlueprintBase::K2_ClearBehaviorClassesForSinkRole() {
}

void UAIGroupBehavior_BlueprintBase::K2_ClearBehaviorClassesForRole(FAIGroupBehaviorRoleSelector RoleSelector) {
}

void UAIGroupBehavior_BlueprintBase::K2_ClearAllBehaviorClasses() {
}

void UAIGroupBehavior_BlueprintBase::K2_ClearAlgorithmValue(FAIGroupBehaviorAlgorithmSelector AlgorithmSelector) const {
}

void UAIGroupBehavior_BlueprintBase::K2_AddRoleToMask(FAIGroupBehaviorRoleSelector Role, FAIGroupBehaviorRoleMask& RoleMask) {
}

void UAIGroupBehavior_BlueprintBase::K2_AddMultipleRolesToMask(FAIGroupBehaviorMultiRoleSelector RoleList, FAIGroupBehaviorRoleMask& RoleMask) {
}

void UAIGroupBehavior_BlueprintBase::CreateContextForInstanceWithDelegate(UObject* Instance, const FAIGroupBehaviorRoleSelector RoleForContext, const FAIBehaviorFunctionDeferredResult& OnDeferredResult, FAIBehaviorFunctionContext& OutContext, UObject*& OutWorldContext) {
}

void UAIGroupBehavior_BlueprintBase::CreateContextForInstanceSinkRoleWithDelegate(UObject* Instance, const int32 RoleForContext, const FAIBehaviorFunctionDeferredResult& OnDeferredResult, FAIBehaviorFunctionContext& OutContext, UObject*& OutWorldContext) {
}

void UAIGroupBehavior_BlueprintBase::CreateContextForInstanceSinkRole(UObject* Instance, const int32 RoleForContext, FAIBehaviorFunctionContext& OutContext, UObject*& OutWorldContext) {
}

void UAIGroupBehavior_BlueprintBase::CreateContextForInstance(UObject* Instance, const FAIGroupBehaviorRoleSelector RoleForContext, FAIBehaviorFunctionContext& OutContext, UObject*& OutWorldContext) {
}


