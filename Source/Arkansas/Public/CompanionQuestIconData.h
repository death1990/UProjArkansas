#pragma once
#include "CoreMinimal.h"
#include "ESpecialObsidianID.h"
#include "CompanionQuestIconData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCompanionQuestIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CompanionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialObsidianID CompanionUniqueID;
    
    ARKANSAS_API FCompanionQuestIconData();
};

