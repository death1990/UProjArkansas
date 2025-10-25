#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "EnemyDifficultyWidget.generated.h"

class UImage;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, Deprecated, EditInlineNew, NotPlaceable)
class UDEPRECATED_EnemyDifficultyWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DifficultSymbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* LevelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtremeEnemyLevelDifferenceMin;
    
public:
    UDEPRECATED_EnemyDifficultyWidget();

};

