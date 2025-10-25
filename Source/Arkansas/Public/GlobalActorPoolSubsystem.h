#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "GlobalActorPoolSubsystem.generated.h"

class UOwActorPool;

UCLASS(Blueprintable)
class ARKANSAS_API UGlobalActorPoolSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UOwActorPool*> ActorPools;
    
public:
    UGlobalActorPoolSubsystem();

};

