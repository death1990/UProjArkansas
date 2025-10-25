#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Blueprint -FallbackName=Blueprint
#include "EAIGroupBehaviorRoleCrossCheckResult.h"
#include "EAIGroupBehaviorRoleScore.h"
#include "AIGroupBehaviorBlueprint.generated.h"

class AIndianaAiCharacter;
class AIndianaAiController;
class UEdGraph;
class UOwConversationInstance;

UCLASS(Blueprintable)
class ARKANSAS_API UAIGroupBehaviorBlueprint : public UBlueprint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEdGraph*> RoleValidatorGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEdGraph*> RoleScorerGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEdGraph*> SinkRoleValidatorGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEdGraph*> RoleCrossCheckGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEdGraph*> BranchExecGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEdGraph*> AlgorithmRunGraphs;
    
public:
    UAIGroupBehaviorBlueprint();

protected:
    UFUNCTION(BlueprintCallable)
    static bool K2_RoleValidatorSignature(AIndianaAiCharacter* Character, AIndianaAiController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static EAIGroupBehaviorRoleScore K2_RoleScorerSignature(AIndianaAiCharacter* Character, AIndianaAiController* Controller, float& RawScoreValue);
    
    UFUNCTION(BlueprintCallable)
    static EAIGroupBehaviorRoleCrossCheckResult K2_RoleCrossCheckSignature(AIndianaAiCharacter* CharacterRoleA, AIndianaAiController* ControllerRoleA, AIndianaAiCharacter* CharacterRoleB, AIndianaAiController* ControllerRoleB);
    
    UFUNCTION(BlueprintCallable)
    static void K2_BranchExecSignature();
    
    UFUNCTION(BlueprintCallable)
    static void K2_AlgorithmRunSignature();
    
public:
    UFUNCTION(BlueprintCallable)
    static void BranchEventSignature_Ticked(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void BranchEventSignature_Started();
    
    UFUNCTION(BlueprintCallable)
    static void BranchEventSignature_PostLoaded();
    
    UFUNCTION(BlueprintCallable)
    static void BranchEventSignature_NPCConversationStart(AIndianaAiController* Controller, UOwConversationInstance* Conversation);
    
    UFUNCTION(BlueprintCallable)
    static void BranchEventSignature_NPCConversationEnd(AIndianaAiController* Controller, UOwConversationInstance* Conversation);
    
    UFUNCTION(BlueprintCallable)
    static void BranchEventSignature_Ended();
    
    UFUNCTION(BlueprintCallable)
    static void BranchEventSignature_Aborted();
    
    UFUNCTION(BlueprintCallable)
    static void AlgorithmEventSignature_Running();
    
    UFUNCTION(BlueprintCallable)
    static void AlgorithmEventSignature_Ready();
    
    UFUNCTION(BlueprintCallable)
    static void AlgorithmEventSignature_Emptied();
    
};

