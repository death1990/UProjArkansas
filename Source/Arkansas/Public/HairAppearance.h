#pragma once
#include "CoreMinimal.h"
#include "AppearanceMatch.h"
#include "HairAppearance.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FHairAppearance : public FAppearanceMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> StandardMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> CappedMesh;
    
    ARKANSAS_API FHairAppearance();
};

