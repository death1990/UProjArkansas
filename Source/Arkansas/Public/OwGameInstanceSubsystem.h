#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "OwGameInstanceSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class ARKANSAS_API UOwGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UOwGameInstanceSubsystem();

};

