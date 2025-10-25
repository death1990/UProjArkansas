#pragma once
#include "CoreMinimal.h"
#include "GenericCollapsableList.h"
#include "ARCC_CollapsibleList.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UARCC_CollapsibleList : public UGenericCollapsableList {
    GENERATED_BODY()
public:
    UARCC_CollapsibleList();

};

