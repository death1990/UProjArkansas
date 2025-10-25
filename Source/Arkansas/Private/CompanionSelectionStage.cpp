#include "CompanionSelectionStage.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent

ACompanionSelectionStage::ACompanionSelectionStage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NilesVisualizer = CreateDefaultSubobject<UChildActorComponent>(TEXT("NilesVisualizerComponent"));
    this->ValerieVisualizer = CreateDefaultSubobject<UChildActorComponent>(TEXT("ValerieVisualizerComponent"));
    this->AzaVisualizer = CreateDefaultSubobject<UChildActorComponent>(TEXT("AzaVisualizerComponent"));
    this->MarisolVisualizer = CreateDefaultSubobject<UChildActorComponent>(TEXT("MarisolVisualizerComponent"));
    this->TristanVisualizer = CreateDefaultSubobject<UChildActorComponent>(TEXT("TristanVisualizerComponent"));
    this->InezVisualizer = CreateDefaultSubobject<UChildActorComponent>(TEXT("InezVisualizerComponent"));
    this->SpawnedCharacterDummies[0] = NULL;
    this->SpawnedCharacterDummies[1] = NULL;
    this->SpawnedCharacterDummies[2] = NULL;
    this->SpawnedCharacterDummies[3] = NULL;
    this->SpawnedCharacterDummies[4] = NULL;
    this->SpawnedCharacterDummies[5] = NULL;
    this->SpawnedCharacterDummies[6] = NULL;
    this->SpawnedCharacterDummies[7] = NULL;
    this->SpawnedCharacterDummies[8] = NULL;
    this->SpawnedCharacterDummies[9] = NULL;
    this->SpawnedCharacterDummies[10] = NULL;
    this->SpawnedCharacterDummies[11] = NULL;
    this->SpawnedCharacterDummies[12] = NULL;
    this->AzaVisualizer->SetupAttachment(RootComponent);
    this->InezVisualizer->SetupAttachment(RootComponent);
    this->MarisolVisualizer->SetupAttachment(RootComponent);
    this->NilesVisualizer->SetupAttachment(RootComponent);
    this->TristanVisualizer->SetupAttachment(RootComponent);
    this->ValerieVisualizer->SetupAttachment(RootComponent);
}

AIndianaCharacterDummy* ACompanionSelectionStage::GetDummy(ESpecialObsidianID CompanionID) const {
    return NULL;
}

void ACompanionSelectionStage::CreateDummy(ESpecialObsidianID CompanionID, AIndianaCharacter* SourceCharacter, bool bInitiallySelected) {
}


