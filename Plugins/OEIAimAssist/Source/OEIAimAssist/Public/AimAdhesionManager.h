#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "AimAdhesionManager.generated.h"

class AActor;
class UAimAdhesionManager;
class UObject;

UCLASS(Blueprintable)
class OEIAIMASSIST_API UAimAdhesionManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UAimAdhesionManager();

    UFUNCTION(BlueprintCallable)
    bool UnRegisterActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAimAdhesionManager* Get(const UObject* WorldContextObject);
    
};

