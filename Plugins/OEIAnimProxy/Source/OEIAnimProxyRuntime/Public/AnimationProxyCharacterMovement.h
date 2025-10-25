#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CharacterMovementComponent -FallbackName=CharacterMovementComponent
#include "AnimationProxyCharacterMovement.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEIANIMPROXYRUNTIME_API UAnimationProxyCharacterMovement : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UAnimationProxyCharacterMovement(const FObjectInitializer& ObjectInitializer);

};

