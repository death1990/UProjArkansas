#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AimAdhesionInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UAimAdhesionInterface : public UInterface {
    GENERATED_BODY()
};

class IAimAdhesionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAimSnappingPoint(FVector& OutAimSnappingPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAdhesionPoint(FVector& OutAdhesionPoint);
    
};

