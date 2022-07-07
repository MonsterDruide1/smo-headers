#pragma once

class InformAfterGameClearScene
{
public:
    InformAfterGameClearScene();
    ~InformAfterGameClearScene();
    init(al::SceneInitInfo const&);
    appear();
    control();
    drawMain() const;
    exePeachWorld();
    exeCollectBgm();
    exeShopMoon();
};
