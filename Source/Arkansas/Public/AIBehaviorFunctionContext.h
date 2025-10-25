#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorFunctionDeferredResultDelegate.h"
#include "AIBehaviorFunctionContext.generated.h"

class AIndianaAiCharacter;
class AIndianaAiController;
class UBehaviorTree;
class UFunction;

USTRUCT(BlueprintType)
struct FAIBehaviorFunctionContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIndianaAiCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIndianaAiController> Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIBehaviorFunctionDeferredResult OnDeferredResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* CallingLibraryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFunction* CallingLibraryFunction;
    
public:
    ARKANSAS_API FAIBehaviorFunctionContext();
};

