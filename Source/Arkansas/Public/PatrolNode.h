#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EAIMovementState.h"
#include "EPatrolMovementType.h"
#include "PatrolNodeReachedDelegateDelegate.h"
#include "PatrolNode.generated.h"

class AIndianaCharacter;
class APatrolNode;
class UAIAction;
class UAISettings_Patrol;
class UObsidianIDComponent;

UCLASS(Blueprintable)
class ARKANSAS_API APatrolNode : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPatrolNodeReachedDelegate PatrolNodeReached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APatrolNode* NextPatrolNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOrientOnArrival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIAction* Action;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPatrolMovementType MovementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* IDComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreatedByTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanStopOnNoneAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAISettings_Patrol* AISettings;
    
public:
    APatrolNode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerPatrolNodeReached(AIndianaCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAIMovementState K2_GetMovementTypeAsState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_GetCreatedByTool() const;
    
};

