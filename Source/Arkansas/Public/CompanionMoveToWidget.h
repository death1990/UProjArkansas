#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CompanionMoveToWidget.generated.h"

class UBorder;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCompanionMoveToWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* RootBorder;
    
public:
    UCompanionMoveToWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveToCancelled();
    
};

