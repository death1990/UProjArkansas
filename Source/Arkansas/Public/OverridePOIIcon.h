#pragma once
#include "CoreMinimal.h"
#include "OverridePOIIcon.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FOverridePOIIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DiscoveredIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* UnknownIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MentionedIcon;
    
    ARKANSAS_API FOverridePOIIcon();
};

