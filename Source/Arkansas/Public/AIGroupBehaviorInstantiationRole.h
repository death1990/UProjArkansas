#pragma once
#include "CoreMinimal.h"
#include "AIGroupBehaviorInstantiationRole.generated.h"

class AIndianaAiCharacter;

USTRUCT(BlueprintType)
struct ARKANSAS_API FAIGroupBehaviorInstantiationRole {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AIndianaAiCharacter>> NPCInstanceOptInList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AIndianaAiCharacter>> NPCInstanceOptOutList;
    
    FAIGroupBehaviorInstantiationRole();
};

