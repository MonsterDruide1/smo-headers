#pragma once

namespace al { 

class Bgm3DParamsController
{
public:
    Bgm3DParamsController(al::AudioDirector const*);
    update();
    finalize();
    start3D();
    end3D();
    change3DParams(float, float, float, float, bool);
    activate();
    deactivate();
    getAudioKeeper() const;
};

} 
