#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ComponentDebugInterface.h"
#include "EnemyScannerActivatedDelegate.h"
#include "EnemyScannerActiveTargetChangedDelegate.h"
#include "EnemyScannerDeactivatedDelegate.h"
#include "EnemyScannerComponent.generated.h"

class AIndianaAiCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnemyScannerComponent : public UActorComponent, public IComponentDebugInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScanTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScanNotTargetingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxScannedTargets;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyScannerActivated EnemyScannerActivatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyScannerDeactivated EnemyScannerDeactivatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyScannerActiveTargetChanged EnemyScannerActiveTargetChangedDelegate;
    
    UEnemyScannerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TimeDilationStart();
    
    UFUNCTION(BlueprintCallable)
    void TimeDilationEnd(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCompanionRegistered(AIndianaAiCharacter* CompanionIn, bool bIsRegistering);
    

    // Fix for true pure virtual functions not being implemented
};

