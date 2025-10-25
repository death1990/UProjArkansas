#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "PersonalityScreenSubsystem.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UPersonalityScreenSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPersonalityScreenSubsystem();

};

