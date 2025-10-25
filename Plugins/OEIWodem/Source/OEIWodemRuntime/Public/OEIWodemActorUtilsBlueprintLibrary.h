#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OEIWodemActorUtilsBlueprintLibrary.generated.h"

class UActorComponent;

UCLASS(Blueprintable)
class OEIWODEMRUNTIME_API UOEIWodemActorUtilsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOEIWodemActorUtilsBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetCanEverAffectNavigationSetting(UActorComponent* InActorComponent, bool InAffectNavigation);
    
};

