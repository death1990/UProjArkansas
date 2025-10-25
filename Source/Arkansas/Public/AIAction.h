#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EAIActionResult.h"
#include "AIAction.generated.h"

class AIndianaAiController;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class UAIAction : public UObject {
    GENERATED_BODY()
public:
    UAIAction();

    UFUNCTION(BlueprintCallable)
    bool Tick(AIndianaAiController* InController, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetStateLocked(AIndianaAiController* InController, const bool bLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComplete(bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAIActionResult GetState() const;
    
    UFUNCTION(BlueprintCallable)
    EAIActionResult Execute(AIndianaAiController* InController);
    
    UFUNCTION(BlueprintCallable)
    void Abort(AIndianaAiController* InController);
    
};

