#pragma once

namespace al { 

class Sequence
{
public:
    getAudioKeeper() const;
    getSceneCreator() const;
    setSceneCreator(al::SceneCreator*);
    Sequence(char const*);
    ~Sequence();
    update();
    kill();
    initAudio(al::GameSystemInfo const&, char const*, int, int, int, char const*);
    initAudioKeeper(char const*);
    initDrawSystemInfo(al::SequenceInitInfo const&);
    getAudioSystemInfo() const;
    drawMain() const;
    drawSub() const;
    init(al::SequenceInitInfo const&);
    isDisposable() const;
    getCurrentScene() const;
};

} 
