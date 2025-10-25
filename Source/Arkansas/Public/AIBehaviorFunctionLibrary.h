#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AIBehaviorFunctionContext.h"
#include "AIBehaviorFunctionDeferredResultDelegate.h"
#include "AIFilterBehaviorTree.h"
#include "AIFilterCharacter.h"
#include "AIFilterController.h"
#include "EAIBehaviorFunctionResult.h"
#include "AIBehaviorFunctionLibrary.generated.h"

class UFunction;
class UObject;

UCLASS(Abstract, Blueprintable)
class ARKANSAS_API UAIBehaviorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFilterCharacter> CharacterPassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFilterCharacter> CharacterBlockList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFilterController> ControllerPassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFilterController> ControllerBlockList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFilterBehaviorTree> BehaviorTreePassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFilterBehaviorTree> BehaviorTreeBlockList;
    
public:
    UAIBehaviorFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool PreFunctionCall(const FAIBehaviorFunctionContext& Context, UClass* Library, UFunction* Function);
    
    UFUNCTION(BlueprintCallable)
    static void PostFunctionCall(const FAIBehaviorFunctionContext& Context, const EAIBehaviorFunctionResult ReturnValue, UClass* Library, UFunction* Function);
    
protected:
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult DefaultFunctionSignature(const FAIBehaviorFunctionContext& Context);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="OutWorldContext"))
    static void CreateContextForInstanceWithDelegate(UObject* Instance, const FAIBehaviorFunctionDeferredResult& OnDeferredResult, FAIBehaviorFunctionContext& OutContext, UObject*& OutWorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="OutWorldContext"))
    static void CreateContextForInstance(UObject* Instance, FAIBehaviorFunctionContext& OutContext, UObject*& OutWorldContext);
    
};

