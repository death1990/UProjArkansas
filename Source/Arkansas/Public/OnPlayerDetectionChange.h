#pragma once
#include "CoreMinimal.h"
#include "EDetectionType.h"
#include "EventListener.h"
#include "OnPlayerDetectionChange.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerDetectionChange : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDetectionType TargetDetectionType;
    
public:
    UOnPlayerDetectionChange();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDetectionChange(AActor* Detectee, EDetectionType DetectionType);
    
};

