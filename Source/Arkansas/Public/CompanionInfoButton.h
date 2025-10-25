#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CompanionInfoButton.generated.h"

class UImage;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCompanionInfoButton : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CompanionPortrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* CompanionName;
    
public:
    UCompanionInfoButton();

};

