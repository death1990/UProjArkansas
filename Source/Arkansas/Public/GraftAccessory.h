#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "Accessory.h"
#include "GraftAccessory.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UGraftAccessory : public UAccessory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GraftType;
    
public:
    UGraftAccessory();

};

