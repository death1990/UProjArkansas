#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "OwnableInterface.generated.h"

UINTERFACE(MinimalAPI)
class UOwnableInterface : public UInterface {
    GENERATED_BODY()
};

class IOwnableInterface : public IInterface {
    GENERATED_BODY()
public:
};

