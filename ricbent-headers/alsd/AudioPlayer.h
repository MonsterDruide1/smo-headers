#pragma once

namespace alsd { 

class AudioPlayer
{
public:
    startSound(alsd::SoundHandle*, unsigned int);
    startSound(alsd::SoundHandle*, char const*);
    holdSound(alsd::SoundHandle*, unsigned int);
    holdSound(alsd::SoundHandle*, char const*);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~AudioPlayer();
    initialize();
    finalize();
    calc();
    getSoundCount() const;
    getSoundName(unsigned int) const;
    getSoundId(char const*) const;
};

} 
