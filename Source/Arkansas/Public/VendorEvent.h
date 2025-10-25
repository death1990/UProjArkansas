#pragma once
#include "CoreMinimal.h"
#include "InteractionGateEvent.h"
#include "VendorEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UVendorEvent : public UInteractionGateEvent {
    GENERATED_BODY()
public:
    UVendorEvent();

};

