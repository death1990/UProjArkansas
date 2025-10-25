#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RPGRequirements.generated.h"

class UInteractableRequirement;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class ARKANSAS_API URPGRequirements : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInteractableRequirement*> RPGRequirements;
    
public:
    URPGRequirements();

};

