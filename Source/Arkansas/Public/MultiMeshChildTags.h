#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "ChildMeshTags.h"
#include "MultiMeshChildTags.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMultiMeshChildTags : public UAssetUserData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FChildMeshTags> ChildMeshTags;
    
public:
    UMultiMeshChildTags();

};

