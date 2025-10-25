#pragma once
#include "CoreMinimal.h"
#include "AITokens.h"
#include "AITokenGroup.generated.h"

class AIndianaAiCharacter;

USTRUCT(BlueprintType)
struct FAITokenGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AIndianaAiCharacter>> Members;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAITokens TokensMap[3];
    
public:
    ARKANSAS_API FAITokenGroup();
};

