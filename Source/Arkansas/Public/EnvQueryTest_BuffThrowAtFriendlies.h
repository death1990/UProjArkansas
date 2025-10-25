#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvQueryTest_BuffThrowAtFriendlies.generated.h"

UCLASS(Blueprintable)
class UEnvQueryTest_BuffThrowAtFriendlies : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UEnvQueryTest_BuffThrowAtFriendlies();

};

