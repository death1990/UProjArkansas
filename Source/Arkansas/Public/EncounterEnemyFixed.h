#pragma once
#include "CoreMinimal.h"
#include "EncounterEnemyDescription.h"
#include "EncounterEnemyFixed.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UEncounterEnemyFixed : public UEncounterEnemyDescription {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorClass;
    
public:
    UEncounterEnemyFixed();

};

