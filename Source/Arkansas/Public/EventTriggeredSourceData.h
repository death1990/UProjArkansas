#pragma once
#include "CoreMinimal.h"
#include "EventTriggeredSourceData.generated.h"

class UEventListener;

USTRUCT(BlueprintType)
struct FEventTriggeredSourceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventListener* SourceEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SourceClass;
    
    ARKANSAS_API FEventTriggeredSourceData();
};

