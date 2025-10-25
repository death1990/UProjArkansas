#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "RespecMachine.generated.h"

class UInteractableComponent;

UCLASS(Blueprintable)
class ARespecMachine : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
public:
    ARespecMachine(const FObjectInitializer& ObjectInitializer);

};

