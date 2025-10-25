#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIPlatformService -ObjectName=EOEIPlatformServiceProvider -FallbackName=EOEIPlatformServiceProvider
#include "IndianaUserWidget.h"
#include "ActiveUserDisplayWidget.generated.h"

class UImage;
class UTextBlockBase;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UActiveUserDisplayWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* UserNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* DefaultSignedInDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DefaultPlatformImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* CrossPlatformSignedInDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CrossPlatformImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* CrossPlatformUserNameTextBlock;
    
public:
    UActiveUserDisplayWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLoginStatusChanged(bool bOldAvailability, bool bNewAvailability, EOEIPlatformServiceProvider Provider);
    
};

