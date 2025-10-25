#pragma once
#include "CoreMinimal.h"
#include "InteractionArrayEvent.h"
#include "InteractableStateEvent.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UInteractableStateEvent : public UInteractionArrayEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLinearRepeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExeuteOnStateTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopExeuteOnLoop;
    
public:
    UInteractableStateEvent();

    UFUNCTION(BlueprintCallable)
    void SetState_BP(int32 NewStateIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearRepeat(bool bShouldLinearRepeat);
    
    UFUNCTION(BlueprintCallable)
    static void ModifyInteractState(AActor* InteractableActor, int32 NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPreviousStateIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentStateIndex() const;
    
};

