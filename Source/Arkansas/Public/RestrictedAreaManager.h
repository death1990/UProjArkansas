#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RestrictedAreaManager.generated.h"

class UWorld;

UCLASS(Blueprintable)
class ARKANSAS_API URestrictedAreaManager : public UObject {
    GENERATED_BODY()
public:
    URestrictedAreaManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPostMapLoad(UWorld* World);
    
};

