#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SaveGameStorageProvider.generated.h"

class USaveGameManager;

UCLASS(Abstract, Blueprintable)
class ARKANSAS_API USaveGameStorageProvider : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGameManager* SaveGameManager;
    
public:
    USaveGameStorageProvider();

};

