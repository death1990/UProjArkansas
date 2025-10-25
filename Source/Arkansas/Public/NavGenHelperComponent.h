#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "NavGenHelperComponent.generated.h"

UCLASS(Blueprintable, DefaultConfig, ClassGroup=Custom, Config=Engine, meta=(BlueprintSpawnableComponent))
class UNavGenHelperComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TransformForNavGen;
    
public:
    UNavGenHelperComponent(const FObjectInitializer& ObjectInitializer);

};

