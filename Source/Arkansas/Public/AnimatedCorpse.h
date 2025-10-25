#pragma once
#include "CoreMinimal.h"
#include "Corpse.h"
#include "AnimatedCorpse.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API AAnimatedCorpse : public ACorpse {
    GENERATED_BODY()
public:
    AAnimatedCorpse(const FObjectInitializer& ObjectInitializer);

};

