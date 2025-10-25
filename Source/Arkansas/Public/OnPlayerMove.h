#pragma once
#include "CoreMinimal.h"
#include "EPlayerMoveEventType.h"
#include "EventListener.h"
#include "OnPlayerMove.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerMove : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerMoveEventType MoveType;
    
public:
    UOnPlayerMove();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerMove();
    
};

