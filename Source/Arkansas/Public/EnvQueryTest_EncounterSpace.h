#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_EncounterSpace.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UEnvQueryTest_EncounterSpace : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> EncounterContext;
    
public:
    UEnvQueryTest_EncounterSpace();

};

