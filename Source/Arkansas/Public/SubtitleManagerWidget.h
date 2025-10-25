#pragma once
#include "CoreMinimal.h"
#include "IndianaInterfaceUserWidget.h"
#include "Templates/SubclassOf.h"
#include "SubtitleManagerWidget.generated.h"

class UMovieSubtitleData;
class USubtitleData;
class USubtitleEntryWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class USubtitleManagerWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* SubtitleVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSubtitleData* MasterSubtitleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USubtitleEntryWidget> SubtitleEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USubtitleData* CurrentSubtitleData;
    
public:
    USubtitleManagerWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCinematicSubtitleVisibilityChanged(bool bVisible);
    
};

