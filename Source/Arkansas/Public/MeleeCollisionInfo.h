#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=TransformedShapeVariant -FallbackName=TransformedShapeVariant
#include "MeleeCollisionInfo.generated.h"

USTRUCT(BlueprintType)
struct FMeleeCollisionInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransformedShapeVariant CollisionShapeInfo;
    
public:
    ARKANSAS_API FMeleeCollisionInfo();
};

