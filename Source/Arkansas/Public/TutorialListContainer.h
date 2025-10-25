#pragma once
#include "CoreMinimal.h"
#include "GenericCollapsableListContainer.h"
#include "TutorialListContainer.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTutorialListContainer : public UGenericCollapsableListContainer {
    GENERATED_BODY()
public:
    UTutorialListContainer();

};

