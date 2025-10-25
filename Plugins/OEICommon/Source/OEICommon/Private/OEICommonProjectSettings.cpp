#include "OEICommonProjectSettings.h"

UOEICommonProjectSettings::UOEICommonProjectSettings() {
    this->ChatterEventQueueProcessLimit = 1;
    this->bShowTextReviewPrefixes = true;
    this->ExportedFolder = TEXT("Content/Exported/");
    this->DesignSourceFolder = TEXT("DesignSource/");
    this->DesignStagingFolder = TEXT("DesignStaging/");
    this->OverrideFolder = TEXT("Override/");
    this->QuickSaveFilename = TEXT("Quicksave");
    this->SaveBeforeLinkFilename = TEXT("SaveBeforeLink");
    this->AutoSaveFilename = TEXT("Autosave");
    this->SaveFileExtension = TEXT("sav");
}


