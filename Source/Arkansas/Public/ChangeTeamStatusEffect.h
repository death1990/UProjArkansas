#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "ChangeTeamStatusEffect.generated.h"

class UTeamData;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UChangeTeamStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTeamData> TeamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTemporaryTeamChange;
    
public:
    UChangeTeamStatusEffect();

};

