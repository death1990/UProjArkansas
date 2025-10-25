#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ConversationFramingComponent.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDEPRECATED_ConversationFramingComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UDEPRECATED_ConversationFramingComponent(const FObjectInitializer& ObjectInitializer);

};

