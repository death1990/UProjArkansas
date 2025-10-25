#pragma once
#include "CoreMinimal.h"
#include "IndianaInterfaceUserWidget.h"
#include "TechArtDebugWidget.generated.h"

class UCanvasPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTechArtDebugWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPauseGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLogCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MainCanvasPanel;
    
public:
    UTechArtDebugWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SendConsoleCommand(const FString& CommandIn);
    
};

