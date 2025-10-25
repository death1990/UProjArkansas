#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvQueryTest_ValidNavLocation.generated.h"

UCLASS(Blueprintable)
class UEnvQueryTest_ValidNavLocation : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavigationFlags;
    
public:
    UEnvQueryTest_ValidNavLocation();

};

