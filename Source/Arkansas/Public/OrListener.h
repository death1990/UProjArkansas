#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OrListener.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOrListener : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEventListener*> ChildListener;
    
public:
    UOrListener();

};

