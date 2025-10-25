#pragma once
#include "CoreMinimal.h"
#include "AppearanceComponent.h"
#include "PlayerAppearanceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerAppearanceComponent : public UAppearanceComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultToThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ThirdPersonPerspectiveParameter;
    
public:
    UPlayerAppearanceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void EnableThirdPersonAppearance();
    
    UFUNCTION(BlueprintCallable)
    void EnableFirstPersonAppearance();
    
};

