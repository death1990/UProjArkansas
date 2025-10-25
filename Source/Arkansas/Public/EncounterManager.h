#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AIGroupBehaviorInstanceKit.h"
#include "EncounterManager.generated.h"

class AEncounter;
class AHardPoint;
class UAIGroupBehaviorInstanceKitComponent;

UCLASS(Blueprintable)
class ARKANSAS_API AEncounterManager : public AActor, public IAIGroupBehaviorInstanceKit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEncounter*> Encounters;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIGroupBehaviorInstanceKitComponent* AIGroupBehaviorInstanceKitComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDynamicHardpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinNumToTriggerDynamicHardpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHardPoint* DynamicHardpoint;
    
    AEncounterManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

