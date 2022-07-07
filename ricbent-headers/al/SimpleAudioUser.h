#pragma once

namespace al { 

class SimpleAudioUser
{
public:
    SimpleAudioUser(char const*, al::AudioDirector*);
    SimpleAudioUser(char const*, al::ActorInitInfo const&);
    SimpleAudioUser(char const*, al::LayoutInitInfo const&);
    getAudioKeeper() const;
};

} 
