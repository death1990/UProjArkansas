#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnPlayerDetected.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerDetected : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredInvestigationTime;
    
public:
    UOnPlayerDetected();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDetected(AActor* Detectee, AActor* Detector, float InvestigationTime);
    
};

