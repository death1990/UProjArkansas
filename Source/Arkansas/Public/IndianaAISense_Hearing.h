#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISense_Hearing -FallbackName=AISense_Hearing
#include "IndianaAISense_Hearing.generated.h"

UCLASS(Blueprintable)
class UIndianaAISense_Hearing : public UAISense_Hearing {
    GENERATED_BODY()
public:
    UIndianaAISense_Hearing();

};

