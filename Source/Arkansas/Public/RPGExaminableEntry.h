#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "RPGExaminableEntry.generated.h"

class UButtonBase;
class URPGInteractionContainerWidget;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API URPGExaminableEntry : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* EntryTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* Button;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 EntryIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URPGInteractionContainerWidget* Requirement1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URPGInteractionContainerWidget* Requirement2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URPGInteractionContainerWidget* Requirement3;
    
public:
    URPGExaminableEntry();

};

