#pragma once

class CollectBgmPlayer
{
public:
    CollectBgmPlayer();
    init(al::IUseAudioKeeper const*);
    prepare();
    start(char const*, char const*);
    stop(int);
    isPlaying(char const*, char const*) const;
    ~CollectBgmPlayer();
};
