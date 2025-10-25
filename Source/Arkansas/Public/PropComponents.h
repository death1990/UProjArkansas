#pragma once
#include "CoreMinimal.h"
#include "PropComponents.generated.h"

class UMeshComponent;
class UParticleSystemComponent;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FPropComponents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* PropMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> AttachedStaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PropParticleSystem;
    
    ARKANSAS_API FPropComponents();
};

