#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
#include "PooledParticleSystemComponent.generated.h"

class UParticlePool;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPooledParticleSystemComponent : public UParticleSystemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticlePool* OwningPool;
    
public:
    UPooledParticleSystemComponent(const FObjectInitializer& ObjectInitializer);

};

