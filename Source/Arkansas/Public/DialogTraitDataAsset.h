#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DialogTrait.h"
#include "DialogTraitDataAsset.generated.h"

UCLASS(Blueprintable)
class UDialogTraitDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogTrait> DialogTraits;
    
public:
    UDialogTraitDataAsset();

};

