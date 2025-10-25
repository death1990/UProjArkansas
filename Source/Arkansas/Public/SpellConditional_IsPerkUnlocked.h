#pragma once
#include "CoreMinimal.h"
#include "ESpecialObsidianID.h"
#include "SpellConditional.h"
#include "Templates/SubclassOf.h"
#include "SpellConditional_IsPerkUnlocked.generated.h"

class UPerk;

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_IsPerkUnlocked : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPerk> PerkClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckOnCompanion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialObsidianID CompanionID;
    
public:
    USpellConditional_IsPerkUnlocked();

};

