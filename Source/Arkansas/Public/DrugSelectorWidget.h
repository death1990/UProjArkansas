#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "DrugSelectorWidget.generated.h"

class UImage;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UDrugSelectorWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DrugSlot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DrugSlot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DrugSlot3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DrugSlot4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ContentsScrollBox;
    
public:
    UDrugSelectorWidget();

};

