#pragma once
#include "CoreMinimal.h"
#include "EComputerType.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "ComputerTerminalContainerWidget.generated.h"

class UBorder;
class UComputerTerminalWidget;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UComputerTerminalContainerWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ContentContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UComputerTerminalWidget> ConversationWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComputerTerminalWidget* ContentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EComputerType, TSoftObjectPtr<UMaterialInterface>> LockScreenTextures;
    
public:
    UComputerTerminalContainerWidget();

};

