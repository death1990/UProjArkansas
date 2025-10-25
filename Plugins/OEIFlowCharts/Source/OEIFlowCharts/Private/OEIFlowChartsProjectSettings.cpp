#include "OEIFlowChartsProjectSettings.h"

UOEIFlowChartsProjectSettings::UOEIFlowChartsProjectSettings() {
    this->bEnableFlowchartDebugInformation = true;
    this->ChatterEventWaitTime = 0.50f;
    this->ChatterEventQueueProcessLimit = 5;
    this->ChatterDebugTextOffset = 10.00f;
    this->bUseIndividualConversationUAssets = true;
    this->bUseIndividualChatterUAssets = true;
    this->bFailInactiveQuestsImmediatelyOnEvent = true;
    this->ConversationBundleSets.AddDefaulted(1);
    this->QuestBundleSets.AddDefaulted(1);
    this->ChatterBundleSets.AddDefaulted(1);
}


