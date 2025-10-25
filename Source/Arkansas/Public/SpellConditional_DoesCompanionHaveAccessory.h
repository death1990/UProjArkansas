#pragma once
#include "CoreMinimal.h"
#include "ESpecialObsidianID.h"
#include "SpellConditional.h"
#include "Templates/SubclassOf.h"
#include "SpellConditional_DoesCompanionHaveAccessory.generated.h"

class UAccessory;

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_DoesCompanionHaveAccessory : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialObsidianID CompanionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAccessory> CompanionAccessory;
    
public:
    USpellConditional_DoesCompanionHaveAccessory();

};

