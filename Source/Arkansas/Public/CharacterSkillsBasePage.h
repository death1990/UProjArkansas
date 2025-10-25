#pragma once
#include "CoreMinimal.h"
#include "LedgerBasePageWidget.h"
#include "SkillCategoryDetail.h"
#include "Templates/SubclassOf.h"
#include "CharacterSkillsBasePage.generated.h"

class UCharacterSkillsDescriptionPanel;
class UScrollBox;
class USkillGroupDetailWidget;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCharacterSkillsBasePage : public ULedgerBasePageWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillCategoryDetail> CategoryInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkillGroupDetailWidget> SkillGroupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* SkillGroupScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* SkillPointsRemainingTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterSkillsDescriptionPanel* DescriptionPanel;
    
public:
    UCharacterSkillsBasePage();

};

