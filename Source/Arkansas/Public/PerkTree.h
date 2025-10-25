#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EPerkCategory.h"
#include "PerkTiers.h"
#include "Templates/SubclassOf.h"
#include "PerkTree.generated.h"

class UPerk;

UCLASS(Blueprintable)
class UPerkTree : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPerkCategory, FPerkTiers> PerkTrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPerk>> NonTreePerks;
    
    UPerkTree();

};

