#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AnimationProxyCharacterMovement.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEIANIMPROXYRUNTIME_API UAnimationProxyCharacterMovement : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UAnimationProxyCharacterMovement(const FObjectInitializer& ObjectInitializer);

};

