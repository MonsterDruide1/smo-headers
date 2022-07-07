#pragma once

class EventDemoCtrl
{
public:
    EventDemoCtrl();
    isSuccessLockTalkDemo(al::LiveActor const*);
    tryLockStartTalkDemo(al::LiveActor*);
    tryLockStartTalkDemoWithoutBalloon(al::LiveActor*);
    tryStartTalkDemo(al::LiveActor*);
    tryStartTalkOnlyRequesterDemo(al::LiveActor*);
    tryStartTalkKeepHackDemo(al::LiveActor*);
    tryStartTalkUseCoinDemo(al::LiveActor*);
    tryStartNormalDemo(al::LiveActor*);
    tryStartKeepBindDemo(al::LiveActor*);
    tryStartCutSceneDemo(al::LiveActor*);
    tryStartCutSceneKeepHackDemo(al::LiveActor*);
    tryStartCutSceneTalkOnlyRequesterDemo(al::LiveActor*);
    requestEndDemo(al::LiveActor*);
    endCutSceneDemo(al::LiveActor*);
    endCutSceneTalkOnlyRequesterDemo(al::LiveActor*);
    endCutSceneDemoBySkip(al::LiveActor*);
    isActiveDemo() const;
    isActiveDemoWithPlayer() const;
    isRequestEndDemo() const;
    getDemoStartActor() const;
    endDemo();
    isDemoStartActor(al::LiveActor const*) const;
    notifyStartDemoSkipFromScene();
    isDemoSkipStart() const;
    getSceneObjName() const;
    ~EventDemoCtrl();
};
