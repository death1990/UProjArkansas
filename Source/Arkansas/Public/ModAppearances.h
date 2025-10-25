#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ModAppearance.h"
#include "ModAppearances.generated.h"

UCLASS(Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class UModAppearances : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModAppearance> ModAppearances;
    
public:
    UModAppearances();

};

