#pragma once
#include "CoreMinimal.h"
#include "ESpecialObsidianID.h"
#include "SpellConditional.h"
#include "SpellConditional_IsSpecialID.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_IsSpecialID : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialObsidianID CompanionID;
    
public:
    USpellConditional_IsSpecialID();

};

