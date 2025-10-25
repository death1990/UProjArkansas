#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "SearchCoordinator.generated.h"

class AActor;
class ASearchPoint;

UCLASS(Blueprintable)
class USearchCoordinator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASearchPoint*> SearchPoints;
    
public:
    USearchCoordinator();

private:
    UFUNCTION(BlueprintCallable)
    void OnPendingSearchActorSetStasis(AActor* Actor, bool bIsInStasis, bool bTemporaryStasis);
    
    UFUNCTION(BlueprintCallable)
    void OnPendingSearchActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

