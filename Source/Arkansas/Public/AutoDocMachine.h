#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EInteractionType.h"
#include "RPGInteractable.h"
#include "AutoDocMachine.generated.h"

class AIndianaPlayerCharacter;

UCLASS(Blueprintable)
class ARKANSAS_API AAutoDocMachine : public ARPGInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteUse;
    
public:
    AAutoDocMachine(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnAnimProxySkipped(AIndianaPlayerCharacter* PlayerCharacter, const FGameplayTag& SkippedAnimProxyKey);
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetPassesConditionals(EInteractionType InteractionType);
    
};

