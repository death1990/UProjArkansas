#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DCLCompanionData.h"
#include "DebugCharacterCompanionLoadout.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UDebugCharacterCompanionLoadout : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDCLCompanionData CompanionData;
    
public:
    UDebugCharacterCompanionLoadout();

};

