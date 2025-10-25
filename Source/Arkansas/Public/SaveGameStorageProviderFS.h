#pragma once
#include "CoreMinimal.h"
#include "SaveGameStorageProvider.h"
#include "SaveGameStorageProviderFS.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API USaveGameStorageProviderFS : public USaveGameStorageProvider {
    GENERATED_BODY()
public:
    USaveGameStorageProviderFS();

};

