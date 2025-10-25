#pragma once
#include "CoreMinimal.h"
#include "AIGroupBehaviorRoleBehaviorClassRule.h"
#include "AIGroupBehaviorRole.generated.h"

class AIndianaAiCharacter;
class AIndianaAiController;

USTRUCT(BlueprintType)
struct ARKANSAS_API FAIGroupBehaviorRole {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIndianaAiController> ActiveController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RoleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIGroupBehaviorRoleBehaviorClassRule BehaviorClassRule;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AIndianaAiCharacter>> CandidateOptInList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AIndianaAiCharacter>> CandidateOptOutList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsRequired: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsNative: 1;
    
public:
    FAIGroupBehaviorRole();
};

