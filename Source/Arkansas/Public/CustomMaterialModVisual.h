#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "AppliedMaterialParam.h"
#include "ModVisual.h"
#include "CustomMaterialModVisual.generated.h"

class UMaterialInstanceDynamic;
class UTexture;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class UCustomMaterialModVisual : public UModVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAppliedMaterialParam> AppliedMaterialParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToChildren;
    
public:
    UCustomMaterialModVisual();

protected:
    UFUNCTION(BlueprintCallable)
    void CopyParamOverrides(UMaterialInstanceDynamic* Source, FName DestinationSlotName);
    
    UFUNCTION(BlueprintCallable)
    void ApplyVectorParamToAll(FName ParamName, FLinearColor ParamValue, FName OnlyApplyIfParamSet);
    
    UFUNCTION(BlueprintCallable)
    void ApplyVectorParam(FName MaterialSlotName, FName ParamName, FLinearColor ParamValue);
    
    UFUNCTION(BlueprintCallable)
    void ApplyTextureParamToAll(FName ParamName, TSoftObjectPtr<UTexture> ParamValue, FName OnlyApplyIfParamSet);
    
    UFUNCTION(BlueprintCallable)
    void ApplyTextureParam(FName MaterialSlotName, FName ParamName, TSoftObjectPtr<UTexture> ParamValue);
    
    UFUNCTION(BlueprintCallable)
    void ApplyScalarParamToAll(FName ParamName, float ParamValue, FName OnlyApplyIfParamSet);
    
    UFUNCTION(BlueprintCallable)
    void ApplyScalarParam(FName MaterialSlotName, FName ParamName, float ParamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Apply();
    
};

