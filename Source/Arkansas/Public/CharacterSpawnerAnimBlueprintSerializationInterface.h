#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "CharacterSpawnerAnimBlueprintSerializationInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UCharacterSpawnerAnimBlueprintSerializationInterface : public UInterface {
    GENERATED_BODY()
};

class ICharacterSpawnerAnimBlueprintSerializationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSerializeOpen();
    
};

