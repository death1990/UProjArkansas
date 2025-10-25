#pragma once
#include "CoreMinimal.h"
#include "AISettings_FleeDanger.generated.h"

USTRUCT(BlueprintType)
struct FAISettings_FleeDanger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    ARKANSAS_API FAISettings_FleeDanger();
};

