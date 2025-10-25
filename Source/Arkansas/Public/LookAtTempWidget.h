#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "LookAtTempWidget.generated.h"

class UProgressBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ULookAtTempWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* LookAt_ProgressBar;
    
    ULookAtTempWidget();

};

