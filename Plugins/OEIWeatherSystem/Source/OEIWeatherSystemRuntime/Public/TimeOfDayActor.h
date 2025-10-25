#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TimeOfDayActor.generated.h"

class AWeatherSystem;

UCLASS(Blueprintable)
class OEIWEATHERSYSTEMRUNTIME_API ATimeOfDayActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_AutoRegister;
    
public:
    ATimeOfDayActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEvalutateTimeOfDay(float TimeOfDayNormalized, float SunAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegistered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWeatherSystem* GetParentWeatherSystem() const;
    
};

