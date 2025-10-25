#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CharacterNameplateWidget.generated.h"

class UCharacterInfoComponent;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCharacterNameplateWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* NameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* LevelTextBlock;
    
public:
    UCharacterNameplateWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLevelChanged(UCharacterInfoComponent* InCharacterInfoComponent, int32 NewLevel);
    
};

