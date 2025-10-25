#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorBaseComponent.h"
#include "AIPlayConversationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIPlayConversationComponent : public UAIBehaviorBaseComponent {
    GENERATED_BODY()
public:
    UAIPlayConversationComponent(const FObjectInitializer& ObjectInitializer);

};

