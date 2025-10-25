#pragma once
#include "CoreMinimal.h"
#include "EncounterEnemyDescription.h"
#include "EncounterEnemyScaled.generated.h"

class UScaledActorTable;

UCLASS(Blueprintable, EditInlineNew)
class UEncounterEnemyScaled : public UEncounterEnemyDescription {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScaledActorTable* ScaledActorTable;
    
public:
    UEncounterEnemyScaled();

};

