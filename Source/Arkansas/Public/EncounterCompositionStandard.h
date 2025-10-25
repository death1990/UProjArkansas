#pragma once
#include "CoreMinimal.h"
#include "EncounterCompositionBase.h"
#include "EncounterCompositionStandard.generated.h"

class UEncounterEnemyDescription;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UEncounterCompositionStandard : public UEncounterCompositionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEncounterEnemyDescription*> EncounterEnemies;
    
public:
    UEncounterCompositionStandard();

};

