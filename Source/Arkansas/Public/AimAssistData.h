#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIAimAssist -ObjectName=AimAdhesionConfig -FallbackName=AimAdhesionConfig
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIAimAssist -ObjectName=AimFrictionConfig -FallbackName=AimFrictionConfig
#include "AimAssistData.generated.h"

UCLASS(Blueprintable)
class UAimAssistData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAimFrictionConfig FrictionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAimAdhesionConfig AdhesionData;
    
public:
    UAimAssistData();

};

