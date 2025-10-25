#pragma once
#include "CoreMinimal.h"
#include "BoxShapeData.h"
#include "Shape.h"
#include "BoxShape.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OEICOMMON_API UBoxShape : public UShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoxShapeData BoxShape;
    
    UBoxShape();

};

