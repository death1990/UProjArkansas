#include "AkRadioController.h"

UAkRadioController::UAkRadioController() {
    this->EmitterPoolWrapper = NULL;
    this->DelayBetweenSongs = 2.00f;
    this->RadioVolumeRTPC = NULL;
}


void UAkRadioController::OnPostMapLoad(UWorld* World) {
}




