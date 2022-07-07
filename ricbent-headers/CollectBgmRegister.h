#pragma once

class CollectBgmRegister
{
public:
    CollectBgmRegister(al::AudioDirector const*, GameDataHolder*, CollectBgmPlayer*);
    update();
    getAudioKeeper() const;
};
