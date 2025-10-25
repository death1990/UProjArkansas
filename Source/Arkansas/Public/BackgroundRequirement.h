#pragma once
#include "CoreMinimal.h"
#include "InteractableRequirement.h"
#include "Templates/SubclassOf.h"
#include "BackgroundRequirement.generated.h"

class UAptitude;

UCLASS(Blueprintable, EditInlineNew)
class UBackgroundRequirement : public UInteractableRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAptitude> Aptitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHas;
    
public:
    UBackgroundRequirement();

};

