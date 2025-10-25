#pragma once
#include "CoreMinimal.h"
#include "PrunedPoly.generated.h"

USTRUCT(BlueprintType)
struct FPrunedPoly {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> VertexBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> IndexBuffer;
    
    ARKANSAS_API FPrunedPoly();
};

