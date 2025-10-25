#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "HairAppearance.h"
#include "HairAppearances.generated.h"

UCLASS(Blueprintable)
class UHairAppearances : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHairAppearance> HairAppearances;
    
public:
    UHairAppearances();

};

