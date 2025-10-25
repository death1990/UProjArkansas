#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EOccupationChannel.h"
#include "ETeamAttitudeFlag.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_OccupiedRaycast.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UEnvQueryTest_OccupiedRaycast : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> DestinationContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOccupationChannel OccupationChannel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETeamAttitudeFlag> AttitudeFlags;
    
public:
    UEnvQueryTest_OccupiedRaycast();

};

