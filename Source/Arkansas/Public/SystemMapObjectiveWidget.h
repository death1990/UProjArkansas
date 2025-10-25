#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "SystemMapObjectiveWidget.generated.h"

class UHorizontalBox;
class UQuestIconImage;
class UTextBlockBase;

UCLASS(Blueprintable, EditInlineNew)
class USystemMapObjectiveWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestIconImage* QuestBeacon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* TextBlock;
    
public:
    USystemMapObjectiveWidget();

};

