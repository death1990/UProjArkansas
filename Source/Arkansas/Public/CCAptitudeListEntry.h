#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CCAptitudeListEntry.generated.h"

class UButtonBase;
class UImage;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCCAptitudeListEntry : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SelectedPipImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* AptitudeNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* Button;
    
public:
    UCCAptitudeListEntry();

};

