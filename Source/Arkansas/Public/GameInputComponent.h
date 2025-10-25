#pragma once
#include "CoreMinimal.h"
#include "IndianaInputComponent.h"
#include "GameInputComponent.generated.h"

class UKeyHoldActionBase;

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UGameInputComponent : public UIndianaInputComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UKeyHoldActionBase*> KeyHoldActions;
    
public:
    UGameInputComponent(const FObjectInitializer& ObjectInitializer);

};

