#pragma once
#include "CoreMinimal.h"
#include "SubCategoryToAudioEvent.h"
#include "CategoryToAudioEvent.generated.h"

USTRUCT(BlueprintType)
struct FCategoryToAudioEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubCategoryToAudioEvent> SubCategoryEvents;
    
    ARKANSAS_API FCategoryToAudioEvent();
};

