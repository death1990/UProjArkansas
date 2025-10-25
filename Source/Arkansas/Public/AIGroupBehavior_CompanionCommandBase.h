#pragma once
#include "CoreMinimal.h"
#include "AIGroupBehaviorBranchSelector.h"
#include "AIGroupBehavior_BlueprintBase.h"
#include "ECompanionCommand.h"
#include "ESpecialObsidianID.h"
#include "AIGroupBehavior_CompanionCommandBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ARKANSAS_API UAIGroupBehavior_CompanionCommandBase : public UAIGroupBehavior_BlueprintBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIGroupBehaviorBranchSelector PostParticipantValidationBranch;
    
public:
    UAIGroupBehavior_CompanionCommandBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsInCriticalSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAIGroupBehaviorBranchSelector K2_GetPostParticipantValidationBranch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpecialObsidianID K2_GetCompanionID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECompanionCommand K2_GetCompanionCommandType() const;
    
    UFUNCTION(BlueprintCallable)
    void K2_EnterCriticalSection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Internal_ParticipantValidation_Exec();
    
};

