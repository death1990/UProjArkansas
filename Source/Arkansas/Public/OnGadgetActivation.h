#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EGadgetActivationType.h"
#include "EventListener.h"
#include "OnGadgetActivation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnGadgetActivation : public UEventListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetActivationType GadgetActivationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GadgetGameplayTag;
    
    UOnGadgetActivation();

protected:
    UFUNCTION(BlueprintCallable)
    void OnGadgetActivation(FGameplayTag GameplayTag);
    
};

