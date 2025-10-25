#pragma once
#include "CoreMinimal.h"
#include "DossierEntry.h"
#include "DossierCustomizedData.generated.h"

class UDossierUserDefinedEnum;

USTRUCT(BlueprintType)
struct FDossierCustomizedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDossierEntry> UnlockableEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDossierUserDefinedEnum* EnumEntryKeys;
    
    ARKANSAS_API FDossierCustomizedData();
};

