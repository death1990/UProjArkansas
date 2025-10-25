#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "AppliedMod.h"
#include "AppliedModVisualData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAppliedModVisualData : public UAssetUserData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAppliedMod> AppliedModData;
    
public:
    UAppliedModVisualData();

};

