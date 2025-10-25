#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISelector_UObject.generated.h"

class UAI_UObject;

USTRUCT(BlueprintType)
struct FAISelector_UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAI_UObject> Object;
    
    ARKANSAS_API FAISelector_UObject();
};

