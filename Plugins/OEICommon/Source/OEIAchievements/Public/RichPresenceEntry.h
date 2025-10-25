#pragma once
#include "CoreMinimal.h"
#include "RichPresenceEntry.generated.h"

USTRUCT(BlueprintType)
struct FRichPresenceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tag;
    
    OEIACHIEVEMENTS_API FRichPresenceEntry();
};

