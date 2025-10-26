#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=IDSet -FallbackName=IDSet
#include "OEIStringEntry.h"
#include "OEITooltipDataArray.h"
#include <IDSet.h>
#include "OEIStringTable.generated.h"

USTRUCT(BlueprintType)
struct OEITEXT_API FOEIStringTable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<int32> StringsWithTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FIDSet> StringsWithFemaleVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FIDSet> StringsWithGenderNeutralVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FOEITooltipDataArray> DefaultTooltipData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FOEITooltipDataArray> FemaleTooltipData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FOEITooltipDataArray> GenderNeutralTooltipData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FOEIStringEntry> Entries;
    
public:
    FOEIStringTable();
};

