#pragma once
#include "CoreMinimal.h"
#include "SharedAnimProxyData.generated.h"

class UAnimationProxyData;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FSharedAnimProxyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* AnimatingMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationProxyData* AnimationProxyData;
    
    OEICROWDMANAGERRUNTIME_API FSharedAnimProxyData();
};

