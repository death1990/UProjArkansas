#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorClassInstance.h"
#include "BTTask_OwBase.h"
#include "BTTask_BehaviorClass.generated.h"

class AIndianaAiCharacter;
class AIndianaAiController;
class UAIBehaviorClass;

UCLASS(Blueprintable)
class ARKANSAS_API UBTTask_BehaviorClass : public UBTTask_OwBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIBehaviorClassInstance AIBehaviorClassInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAIBehaviorClass* AIBehaviorClassEditInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIndianaAiCharacter* CharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIndianaAiController* ControllerOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowClassMigration: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsOutOfCombatBehavior: 1;
    
public:
    UBTTask_BehaviorClass();

};

