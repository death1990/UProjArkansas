#pragma once
#include "CoreMinimal.h"
#include "MultiMeshChildVisitorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FMultiMeshChildVisitor, int32, ChildIndex);

