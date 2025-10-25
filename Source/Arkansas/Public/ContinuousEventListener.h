#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "ContinuousEventListener.generated.h"

class USpellConditional;

UCLASS(Blueprintable, EditInlineNew)
class UContinuousEventListener : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USpellConditional*> Conditionals;
    
public:
    UContinuousEventListener();

};

