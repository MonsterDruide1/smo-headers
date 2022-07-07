#pragma once

class StageSceneStateTitleLogo
{
public:
    tryCreate(al::Scene*, al::ActorInitInfo const&, al::LayoutInitInfo const&, al::WipeHolder*, GameDataHolder*);
    StageSceneStateTitleLogo(char const*, al::Scene*, al::SimpleLayoutAppearWaitEnd*, al::WipeHolder*, GameDataHolder*, al::ActorInitInfo const&);
    appear();
    kill();
    exeWait();
    ~StageSceneStateTitleLogo();
};
