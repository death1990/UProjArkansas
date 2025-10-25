#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "HorizontalOptionVisualizerWidget.generated.h"

class UButtonGroup;
class UHorizontalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UHorizontalOptionVisualizerWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ContentsHBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialSelectedIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UButtonGroup* ButtonGroup;
    
public:
    UHorizontalOptionVisualizerWidget();

};

