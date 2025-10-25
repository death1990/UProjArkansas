#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "FlipbookWidget.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UUIFlipBookData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFlipbookWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIFlipBookData* FlipbookData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DisplayImage;
    
public:
    UFlipbookWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    void EndPlay();
    
    UFUNCTION(BlueprintCallable)
    void BeginPlay(bool bInShouldLoop, int32 PlayFromFrame);
    
};

