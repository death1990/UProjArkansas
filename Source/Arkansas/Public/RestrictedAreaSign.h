#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ERestrictedAreaState.h"
#include "OnRestrcitedAreaStateChangedDelegate.h"
#include "RestrictedAreaSign.generated.h"

class UStaticMesh;
class UStaticMeshComponent;
class UTooltipComponent;

UCLASS(Blueprintable)
class ARestrictedAreaSign : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRestrcitedAreaStateChanged OnRestrictedAreaStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTooltipComponent* TooltipComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERestrictedAreaState, UStaticMesh*> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERestrictedAreaState CurrentSignageState;
    
public:
    ARestrictedAreaSign(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSignageState(ERestrictedAreaState State);
    
    UFUNCTION(BlueprintCallable)
    ERestrictedAreaState GetSignageState();
    
};

