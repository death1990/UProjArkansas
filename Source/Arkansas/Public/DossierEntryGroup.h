#pragma once
#include "CoreMinimal.h"
#include "DossierEntryNames.h"
#include "DossierEntryGroup.generated.h"

class UDossierDataAsset;

USTRUCT(BlueprintType)
struct FDossierEntryGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UDossierDataAsset*, FDossierEntryNames> EntryGroup;
    
    ARKANSAS_API FDossierEntryGroup();
};

