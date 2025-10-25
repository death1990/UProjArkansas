#pragma once
#include "CoreMinimal.h"
#include "IndianaInterfaceUserWidget.h"
#include "OnShaderCompilationCompleteDelegate.h"
#include "ShaderPreCacheWidget.generated.h"

class UButtonBase;
class UProgressBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UShaderPreCacheWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShaderCompilationComplete OnShaderCompilationComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkipTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ShaderCacheProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* SkipCompilationButton;
    
public:
    UShaderPreCacheWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSkipTimerComplete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompilingShaders() const;
    
};

