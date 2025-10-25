#pragma once
#include "CoreMinimal.h"
#include "ESpecialObsidianID.h"
#include "InteractableRequirement.h"
#include "CompanionRequirement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCompanionRequirement : public UInteractableRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialObsidianID CompanionID;
    
public:
    UCompanionRequirement();

};

