#pragma once
#include "CoreMinimal.h"
#include "FancyReloadData.h"
#include "FancyReloadSet.generated.h"

USTRUCT(BlueprintType)
struct FFancyReloadSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckCoverSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFancyReloadData StandardReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFancyReloadData CrouchReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFancyReloadData CoverFullHeightReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFancyReloadData CoverHalfHeightReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFancyReloadData CoverFullHeightReload_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFancyReloadData CoverHalfHeightReload_Right;
    
    ARKANSAS_API FFancyReloadSet();
};

