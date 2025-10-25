#pragma once
#include "CoreMinimal.h"
#include "AudioLogDefinition.h"
#include "AudioLogStoredInfo.h"
#include "Item.h"
#include "AudioLogItem.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UAudioLogItem : public UItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAudioLogStoredInfo> AudioFiles;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioLogDefinition AudioLogDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ItemMesh;
    
public:
    UAudioLogItem();

};

