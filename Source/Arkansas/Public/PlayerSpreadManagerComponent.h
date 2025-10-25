#pragma once
#include "CoreMinimal.h"
#include "SpreadManagerComponent.h"
#include "PlayerSpreadManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UPlayerSpreadManagerComponent : public USpreadManagerComponent {
    GENERATED_BODY()
public:
    UPlayerSpreadManagerComponent(const FObjectInitializer& ObjectInitializer);

};

