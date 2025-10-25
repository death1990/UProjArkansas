#pragma once
#include "CoreMinimal.h"
#include "ECrimeType.h"
#include "InteractionScriptEvent.h"
#include "StartCrime.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UStartCrime : public UInteractionScriptEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrimeType CrimeType;
    
    UStartCrime();

};

