#pragma once
#include "CoreMinimal.h"
#include "DossierEntryNames.generated.h"

USTRUCT(BlueprintType)
struct FDossierEntryNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Names;
    
    ARKANSAS_API FDossierEntryNames();
};

