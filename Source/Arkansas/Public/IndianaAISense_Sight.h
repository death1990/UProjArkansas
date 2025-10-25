#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISense_Sight -FallbackName=AISense_Sight
#include "IndianaAISense_Sight.generated.h"

UCLASS(Blueprintable)
class UIndianaAISense_Sight : public UAISense_Sight {
    GENERATED_BODY()
public:
    UIndianaAISense_Sight();

};

