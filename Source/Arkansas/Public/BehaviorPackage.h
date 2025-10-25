#pragma once
#include "CoreMinimal.h"
#include "BehaviorSettings_Set.h"
#include "EPhaseOfDay.h"
#include "ScriptedBehavior_Set.h"
#include "BehaviorPackage.generated.h"

USTRUCT(BlueprintType)
struct FBehaviorPackage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBehaviorSettings_Set DefaultBehaviorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBehaviorSettings_Set PostDormantBehaviorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPhaseOfDay, FBehaviorSettings_Set> TimeOfDayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptedBehavior_Set> ScriptedBehaviors;
    
public:
    ARKANSAS_API FBehaviorPackage();
};

