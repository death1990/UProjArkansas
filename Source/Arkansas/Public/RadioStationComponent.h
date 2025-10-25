#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "RadioStationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API URadioStationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URadioStationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TurnRadioOn();
    
    UFUNCTION(BlueprintCallable)
    void TurnRadioOff();
    
};

