#pragma once
#include "CoreMinimal.h"
#include "ClassPropertyDataWithObjects.h"
#include "AIBehaviorClassInstance.generated.h"

class UAIBehaviorClass;

USTRUCT(BlueprintType)
struct ARKANSAS_API FAIBehaviorClassInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAIBehaviorClass> BehaviorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAIBehaviorClass* BehaviorClassInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClassPropertyDataWithObjects SerializedClassDataWithObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> SerializedGameStateData;
    
public:
    FAIBehaviorClassInstance();
};

