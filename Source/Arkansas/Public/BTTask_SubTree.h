#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorTreeReference.h"
#include "BTTask_OwBase.h"
#include "BTTask_SubTree.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTTask_SubTree : public UBTTask_OwBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubTreeReferenceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIBehaviorTreeReference BehaviorAsset;
    
    UBTTask_SubTree();

};

