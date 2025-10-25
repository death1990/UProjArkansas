#include "AIGroupBehaviorBlueprint.h"

UAIGroupBehaviorBlueprint::UAIGroupBehaviorBlueprint() {
}

bool UAIGroupBehaviorBlueprint::K2_RoleValidatorSignature(AIndianaAiCharacter* Character, AIndianaAiController* Controller) {
    return false;
}

EAIGroupBehaviorRoleScore UAIGroupBehaviorBlueprint::K2_RoleScorerSignature(AIndianaAiCharacter* Character, AIndianaAiController* Controller, float& RawScoreValue) {
    return EAIGroupBehaviorRoleScore::Highest;
}

EAIGroupBehaviorRoleCrossCheckResult UAIGroupBehaviorBlueprint::K2_RoleCrossCheckSignature(AIndianaAiCharacter* CharacterRoleA, AIndianaAiController* ControllerRoleA, AIndianaAiCharacter* CharacterRoleB, AIndianaAiController* ControllerRoleB) {
    return EAIGroupBehaviorRoleCrossCheckResult::KeepBoth;
}

void UAIGroupBehaviorBlueprint::K2_BranchExecSignature() {
}

void UAIGroupBehaviorBlueprint::K2_AlgorithmRunSignature() {
}

void UAIGroupBehaviorBlueprint::BranchEventSignature_Ticked(float DeltaSeconds) {
}

void UAIGroupBehaviorBlueprint::BranchEventSignature_Started() {
}

void UAIGroupBehaviorBlueprint::BranchEventSignature_PostLoaded() {
}

void UAIGroupBehaviorBlueprint::BranchEventSignature_NPCConversationStart(AIndianaAiController* Controller, UOwConversationInstance* Conversation) {
}

void UAIGroupBehaviorBlueprint::BranchEventSignature_NPCConversationEnd(AIndianaAiController* Controller, UOwConversationInstance* Conversation) {
}

void UAIGroupBehaviorBlueprint::BranchEventSignature_Ended() {
}

void UAIGroupBehaviorBlueprint::BranchEventSignature_Aborted() {
}

void UAIGroupBehaviorBlueprint::AlgorithmEventSignature_Running() {
}

void UAIGroupBehaviorBlueprint::AlgorithmEventSignature_Ready() {
}

void UAIGroupBehaviorBlueprint::AlgorithmEventSignature_Emptied() {
}


