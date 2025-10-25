#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "SkillGroupDetailWidget.generated.h"

class UCategoryButtonEntryWidget;
class UImage;
class USkillButtonEntryWidget;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USkillGroupDetailWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TwoSkillsBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ThreeSkillsBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCategoryButtonEntryWidget* SkillGroupCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ChildSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkillButtonEntryWidget> SkillEntryClass;
    
public:
    USkillGroupDetailWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkillSelected();
    
};

