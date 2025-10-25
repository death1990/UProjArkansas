#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EyebrowAppearance.h"
#include "EyebrowAppearances.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UEyebrowAppearances : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEyebrowAppearance> EyebrowAppearances;
    
public:
    UEyebrowAppearances();

};

