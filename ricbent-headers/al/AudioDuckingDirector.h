#pragma once

namespace al { 

class AudioDuckingDirector
{
public:
    AudioDuckingDirector(char const*, al::SeDirector*, al::BgmDirector*, al::BgmDataBase*);
    finalize();
    update();
    startDucking();
    endDucking();
};

} 
