#pragma once
#include "CoreMinimal.h"
#include "OEITooltipToken.generated.h"

USTRUCT(BlueprintType)
struct OEITEXT_API FOEITooltipToken {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TermStringID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DescriptionStringID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeInGlossary;
    
public:
    FOEITooltipToken();
};

