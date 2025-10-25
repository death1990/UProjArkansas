#pragma once
#include "CoreMinimal.h"
#include "ModVisual.h"
#include "AttachFxModVisual.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAttachFxModVisual : public UModVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> NiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* AddedNiagaraComponent;
    
public:
    UAttachFxModVisual();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerShoulderSwap(const bool bUseAlternateShoulder);
    
};

