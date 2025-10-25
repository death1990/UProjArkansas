#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimMetaData -FallbackName=AnimMetaData
#include "OverrideRotationSpeedAnimMetaData.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UOverrideRotationSpeedAnimMetaData : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRotationSpeed;
    
    UOverrideRotationSpeedAnimMetaData();

};

