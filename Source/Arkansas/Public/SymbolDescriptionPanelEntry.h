#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "SymbolDescriptionPanelEntry.generated.h"

class UImage;
class UTextBlockBase;

UCLASS(Blueprintable, EditInlineNew)
class USymbolDescriptionPanelEntry : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SymbolImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* SymbolName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* SymbolDescription;
    
public:
    USymbolDescriptionPanelEntry();

};

