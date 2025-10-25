#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "BaseTeamData.generated.h"

class UTeamData;

UCLASS(Abstract, Blueprintable)
class UBaseTeamData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UTeamData>> Teams;
    
public:
    UBaseTeamData();

};

