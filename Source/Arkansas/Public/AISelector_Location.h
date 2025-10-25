#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISelector_Location.generated.h"

class UAILocation;

USTRUCT(BlueprintType)
struct FAISelector_Location {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAILocation> AILocation;
    
    ARKANSAS_API FAISelector_Location();
};

