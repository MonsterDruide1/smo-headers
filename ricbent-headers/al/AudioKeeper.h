#pragma once

namespace al { 

class AudioKeeper
{
public:
    AudioKeeper(al::AudioDirector const*);
    initSeKeeper(al::AudioDirector const*, char const*, sead::Vector3<float> const*, sead::Matrix34<float> const*, al::ModelKeeper const*, al::CameraDirector*);
    initBgmKeeper(al::AudioDirector const*, char const*);
    validate();
    invalidate();
    startClipped();
    endClipped();
    appear();
    kill();
    ~AudioKeeper();
};

} 
