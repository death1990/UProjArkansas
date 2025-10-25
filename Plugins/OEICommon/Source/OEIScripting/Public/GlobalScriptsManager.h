#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GlobalScriptsManager.generated.h"

UCLASS(Blueprintable)
class OEISCRIPTING_API UGlobalScriptsManager : public UObject {
    GENERATED_BODY()
public:
    UGlobalScriptsManager();

};

