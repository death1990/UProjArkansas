#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EQSQueryReferencer.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, HideDropdown, NotPlaceable)
class UEQSQueryReferencer : public UObject {
    GENERATED_BODY()
public:
    UEQSQueryReferencer();

};

