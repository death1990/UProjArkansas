#pragma once
#include "CoreMinimal.h"
#include <LocString.h>
#include "OEIUserSetting.h"
#include "OEIBooleanSetting.generated.h"

UCLASS(Blueprintable)
class OEISETTINGS_API UOEIBooleanSetting : public UOEIUserSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString OffDisplayString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString OnDisplayString;
    
    UOEIBooleanSetting();

};

