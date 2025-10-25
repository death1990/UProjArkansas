#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OEICineIdleSettings.generated.h"

class UBodyIdleAsset;

UCLASS(Blueprintable)
class OEICINEMATICS_API UOEICineIdleSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBodyIdleAsset*> UsedIdles;
    
    UOEICineIdleSettings();

};

