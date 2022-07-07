#pragma once

namespace al { 

class AudioDirector
{
public:
    AudioDirector();
    init(al::AudioDirectorInitInfo const&);
    init3D(al::AudioDirectorInitInfo const&);
    initAfterInitPlacement();
    initMic(al::AudioMic*);
    setDependentModule(al::AudioDirector*);
    updatePre();
    updatePost();
    startFinalizeUnsafeModuleInParallelThread();
    updateFinalizeUnsafeModuleInParallelThread();
    isFinalizedUnsafeModuleInParallelThread();
    finalize();
    isSystemPauseNow() const;
    setPlayerHolder(al::PlayerHolder const*);
    addAudiioFrameProccess(aal::IAudioFrameProcess*);
    removeAudiioFrameProccess(aal::IAudioFrameProcess*);
    getAudioMaximizer() const;
    pauseSystem(bool, char const*, bool, float, bool, bool, bool);
    isPpausedSystem(char const*);
    getAreaObjDirector() const;
};

} 
