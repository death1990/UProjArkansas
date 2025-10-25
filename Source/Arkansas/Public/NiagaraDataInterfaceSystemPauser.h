#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraDataInterface -FallbackName=NiagaraDataInterface
#include "NiagaraDataInterfaceSystemPauser.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UNiagaraDataInterfaceSystemPauser : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UNiagaraDataInterfaceSystemPauser();

};

