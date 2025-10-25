#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "AIGroupBehaviorInstantiationAlgorithm.h"
#include "AIGroupBehaviorInstantiationRole.h"
#include "ClassPropertyDataWithObjects.h"
#include "LogicalGroupedExpression.h"
#include "AIGroupBehaviorInstantiation.generated.h"

class UAIGroupBehavior;

USTRUCT(BlueprintType)
struct ARKANSAS_API FAIGroupBehaviorInstantiation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAIGroupBehavior* InstantiationEditInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath GroupBehaviorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalGroupedExpression StartConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClassPropertyDataWithObjects PropertyDataWithObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FAIGroupBehaviorInstantiationRole> RoleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FAIGroupBehaviorInstantiationAlgorithm> AlgorithmData;
    
    FAIGroupBehaviorInstantiation();
};

