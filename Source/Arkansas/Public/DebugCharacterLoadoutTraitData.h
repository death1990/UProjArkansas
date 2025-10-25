#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DCLTraitData.h"
#include "DebugCharacterLoadoutTraitData.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UDebugCharacterLoadoutTraitData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDCLTraitData TraitData;
    
public:
    UDebugCharacterLoadoutTraitData();

};

