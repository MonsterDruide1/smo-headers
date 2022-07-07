#pragma once

class LifeUpItemGenerateWatcher
{
public:
    LifeUpItemGenerateWatcher(char const*);
    tryCreate(al::LiveActor const*, al::ActorInitInfo const&);
    init(al::ActorInitInfo const&);
    control();
    tryGenerateLifeUpItem(al::LiveActor const*);
    getSceneObjName() const;
    ~LifeUpItemGenerateWatcher();
};
