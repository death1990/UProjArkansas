#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InteractionEventBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class ARKANSAS_API UInteractionEventBase : public UObject {
    GENERATED_BODY()
public:
    UInteractionEventBase();

};

