#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DeathBehavior.generated.h"

class AActor;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class UDeathBehavior : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
public:
    UDeathBehavior();

    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetTargetMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomTick();
    
    UFUNCTION(BlueprintCallable)
    void Complete();
    
};

