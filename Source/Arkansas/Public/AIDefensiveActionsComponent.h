#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CauseDamageInfo.h"
#include "AIDefensiveActionsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIDefensiveActionsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAIDefensiveActionsComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(const FCauseDamageInfo& CauseDamageInfo);
    
};

