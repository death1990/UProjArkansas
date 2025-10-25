#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AIBehaviorClass.h"
#include "AIBehaviorClass_BlueprintBase.generated.h"

class AActor;
class AIndianaAiCharacter;
class AIndianaAiController;
class UBehaviorTree;
class UObject;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UAIBehaviorClass_BlueprintBase : public UAIBehaviorClass {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TickDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRestartClassOnResume: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 BehaviorStartResultSet: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 BehaviorStartResult: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBehaviorPaused;
    
public:
    UAIBehaviorClass_BlueprintBase();

protected:
    UFUNCTION(BlueprintCallable)
    void K2_SetBlackboardKeyValueAsVector(const FBlackboardKeySelector Key, FVector VectorValue);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetBlackboardKeyValueAsString(const FBlackboardKeySelector Key, const FString& StringValue);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetBlackboardKeyValueAsRotator(const FBlackboardKeySelector Key, FRotator RotatorValue);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetBlackboardKeyValueAsObject(const FBlackboardKeySelector Key, UObject* ObjectValue);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetBlackboardKeyValueAsName(const FBlackboardKeySelector Key, FName NameValue);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetBlackboardKeyValueAsInt(const FBlackboardKeySelector Key, int32 IntValue);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetBlackboardKeyValueAsFloat(const FBlackboardKeySelector Key, float FloatValue);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetBlackboardKeyValueAsEnum(const FBlackboardKeySelector Key, uint8 EnumValue);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetBlackboardKeyValueAsClass(const FBlackboardKeySelector Key, UClass* ClassValue);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetBlackboardKeyValueAsBool(const FBlackboardKeySelector Key, bool BoolValue);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetBehaviorStartResult(const bool bResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsInBehaviorTree() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsBlackboardKeyVectorValueSet(const FBlackboardKeySelector Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsBlackboardKeySet(const FBlackboardKeySelector Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsBehaviorPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString K2_GetRuntimeDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float K2_GetLatestDeltaTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 K2_GetDebugLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIndianaAiController* K2_GetController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIndianaAiCharacter* K2_GetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector K2_GetBlackboardKeyValueAsVector(const FBlackboardKeySelector Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString K2_GetBlackboardKeyValueAsString(const FBlackboardKeySelector Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator K2_GetBlackboardKeyValueAsRotator(const FBlackboardKeySelector Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* K2_GetBlackboardKeyValueAsObject(const FBlackboardKeySelector Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName K2_GetBlackboardKeyValueAsName(const FBlackboardKeySelector Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 K2_GetBlackboardKeyValueAsInt(const FBlackboardKeySelector Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float K2_GetBlackboardKeyValueAsFloat(const FBlackboardKeySelector Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 K2_GetBlackboardKeyValueAsEnum(const FBlackboardKeySelector Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* K2_GetBlackboardKeyValueAsClass(const FBlackboardKeySelector Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_GetBlackboardKeyValueAsBool(const FBlackboardKeySelector Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* K2_GetBlackboardKeyValueAsActor(const FBlackboardKeySelector Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBehaviorTree* K2_GetBehaviorTree() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool K2_EvaluateCanAbort();
    
    UFUNCTION(BlueprintCallable)
    void K2_ClearBlackboardKeyValue(const FBlackboardKeySelector Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_CheckDebugLevel(int32 Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_BehaviorTick(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_BehaviorStop(const bool bResult, const bool bAborted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_BehaviorStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_BehaviorResumed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_BehaviorPostGameLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_BehaviorPaused();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_BehaviorDebugTick(const float DeltaTime, const int32 DebugLevel);
    
};

