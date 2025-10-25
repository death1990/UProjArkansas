#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "TimeDilationUpdatedDelegate.h"
#include "TimeDilationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTimeDilationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeDilationUpdated OnTimeDilationUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRuntimeFloatCurve> Params;
    
public:
    UTimeDilationComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Exec)
    void TimeDilatePlayer(float Dilation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SlomoWorld(float Dilation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimeDilationStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimeDilationEnd();
    
};

