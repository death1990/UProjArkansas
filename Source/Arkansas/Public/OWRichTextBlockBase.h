#pragma once
#include "CoreMinimal.h"
#include "EIndianaUIColorType.h"
#include "ETextScalingType.h"
#include "RichTextBlockBase.h"
#include "OWRichTextBlockBase.generated.h"

UCLASS(Blueprintable)
class UOWRichTextBlockBase : public URichTextBlockBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFontScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextScalingType TextScalingType;
    
public:
    UOWRichTextBlockBase();

    UFUNCTION(BlueprintCallable)
    void UseTextStyleShadowOffset(bool bShouldUse);
    
    UFUNCTION(BlueprintCallable)
    void UseTextStyleOutline(bool bShouldUse);
    
    UFUNCTION(BlueprintCallable)
    void SetWrapTextAt(float ShouldWrapTextAt);
    
    UFUNCTION(BlueprintCallable)
    void SetMarshallerColorOverride(EIndianaUIColorType IndianaColorType);
    
};

