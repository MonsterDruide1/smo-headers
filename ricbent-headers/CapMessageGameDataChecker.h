#pragma once

class CapMessageGameDataChecker
{
public:
    CapMessageGameDataChecker();
    initByPlacementInfo(al::ActorInitInfo const&);
    invalidateKidsMode();
    invalidatePlayerSeparate();
    invalidateGameClear();
    enableNoCap();
    enableGiantWanderBoss();
    check(al::IUseSceneObjHolder const*) const;
};
