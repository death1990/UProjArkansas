#pragma once
#include "CoreMinimal.h"
#include "Corpse.h"
#include "ExaminableCorpse.generated.h"

UCLASS(Blueprintable)
class AExaminableCorpse : public ACorpse {
    GENERATED_BODY()
public:
    AExaminableCorpse(const FObjectInitializer& ObjectInitializer);

};

