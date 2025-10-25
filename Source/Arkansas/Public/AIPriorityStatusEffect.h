#pragma once
#include "CoreMinimal.h"
#include "EPriorityNodeValue.h"
#include "PriorityNodeHandle.h"
#include "StatusEffect.h"
#include "AIPriorityStatusEffect.generated.h"

class AActor;
class AIndianaAiCharacter;
class AIndianaAiController;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAIPriorityStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPriorityNodeValue Priority;
    
public:
    UAIPriorityStatusEffect();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveClearEffectAIPriority(AIndianaAiCharacter* AffectedCharacter, AIndianaAiController* AffectedController, UPARAM(Ref) FPriorityNodeHandle& Handle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveApplyEffectAIPriority(AIndianaAiCharacter* AffectedCharacter, AIndianaAiController* AffectedController, UPARAM(Ref) FPriorityNodeHandle& Handle, AActor* Origin, float Ratio, bool bRestoredFromSave) const;
    
};

