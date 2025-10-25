#pragma once
#include "CoreMinimal.h"
#include "EncounterCompositionBase.h"
#include "EncounterCompositionSubList.generated.h"

class UEncounterList;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UEncounterCompositionSubList : public UEncounterCompositionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEncounterList* SubEncounterList;
    
public:
    UEncounterCompositionSubList();

};

