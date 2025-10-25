#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AIOrientationSettings.h"
#include "AIPossessable.h"
#include "PriorityNodeListenerInterface.h"
#include "AIOrientationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIOrientationComponent : public UActorComponent, public IAIPossessable, public IPriorityNodeListenerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIOrientationSettings> SettingsPerTrackingRegion;
    
public:
    UAIOrientationComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

