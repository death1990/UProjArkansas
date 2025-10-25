#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "OEIGestureSequenceData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OEICINEMATICS_API UOEIGestureSequenceData : public UAssetUserData {
    GENERATED_BODY()
public:
    UOEIGestureSequenceData();

};

