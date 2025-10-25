#pragma once
#include "CoreMinimal.h"
#include "GenericCollapsableList.h"
#include "MovieList.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMovieList : public UGenericCollapsableList {
    GENERATED_BODY()
public:
    UMovieList();

};

