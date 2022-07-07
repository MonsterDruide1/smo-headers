#pragma once

namespace alAudioEventControllerFunction {

tryRegistBgmPlayObj(al::AudioEventController*, al::BgmPlayObj*);
getBgmPlayNameInCurPosition(al::AudioEventController*, bool);
getBgmPlayNameInTargetPosition(al::AudioEventController*, sead::Vector3<float> const&);
tryStartAndStopBgmInCurPosition(al::AudioEventController*, bool, bool);
activateAudioEventCtrl(al::AudioDirector*);
deactivateAudioEventCtrl(al::AudioDirector*);
tryActivateOrDeactivateAudioEventCtrl(al::AudioDirector*, bool, int);

} 
