#include "ProjectileLauncher.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

AProjectileLauncher::AProjectileLauncher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileClass = NULL;
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Muzzle"));
    this->ArrowComponent->SetupAttachment(RootComponent);
}


