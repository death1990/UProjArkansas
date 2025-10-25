#pragma once
#include "CoreMinimal.h"
#include "AICharacterToSpawnerPair.generated.h"

class ACharacterSpawner;
class AIndianaAiCharacter;

USTRUCT(BlueprintType)
struct FAICharacterToSpawnerPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIndianaAiCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ACharacterSpawner> CharacterSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacterSpawner* Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDormant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AwakenDelay;
    
    ARKANSAS_API FAICharacterToSpawnerPair();
};

