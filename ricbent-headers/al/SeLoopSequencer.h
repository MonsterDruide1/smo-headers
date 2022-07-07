#pragma once

namespace al { 

class SeLoopSequencer
{
public:
    SeLoopSequencer(al::AudioDirector const*);
    addRequest(char const*, al::MeInfo const*, int);
    update();
    getAudioKeeper() const;
};

} 
