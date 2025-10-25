#pragma once
#include "CoreMinimal.h"
#include "AppearanceMatch.h"
#include "BeardAppearance.generated.h"

class USkeletalMesh;
class UTexture;

USTRUCT(BlueprintType)
struct FBeardAppearance : public FAppearanceMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> BeardTexture;
    
    ARKANSAS_API FBeardAppearance();
};

