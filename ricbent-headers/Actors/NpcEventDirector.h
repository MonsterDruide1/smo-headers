#pragma once

class NpcEventDirector
{
public:
    NpcEventDirector(al::PlayerHolder const*, al::CameraDirector*, al::CollisionDirector*, al::MessageSystem const*, EventFlowSceneExecuteCtrl*);
    init(al::ActorInitInfo const&);
    execute();
    updateBalloon();
    killAllBalloonForSnapShotMode();
    exeWait();
    exeDemo();
    exeDemoWipeClose();
    exeDemoWipeOpen();
    exeDemoTalk();
    endDemoTalk();
    exeDemoTalkEnd();
    exeDemoSelectChoiceStart();
    exeDemoSelectChoice();
    ~NpcEventDirector();
    getCameraDirector() const;
    getCollisionDirector() const;
    getSceneObjHolder() const;
    getMessageSystem() const;
};
