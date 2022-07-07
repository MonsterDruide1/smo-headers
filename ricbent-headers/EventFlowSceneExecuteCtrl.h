#pragma once

class EventFlowSceneExecuteCtrl
{
public:
    EventFlowSceneExecuteCtrl();
    requestEventGetShineDirect(al::LiveActor const*, Shine*);
    requestEventOpenBgmList(al::LiveActor const*);
    requestEventOpenShineList(al::LiveActor const*);
    requestEventGetAchievement(al::LiveActor const*, char const*);
    isExistRequestGetShineDirect() const;
    isExistRequestOpenBgmList() const;
    isExistRequestOpenShineList() const;
    isExistRequestGetAchievement() const;
    getShine() const;
    getAchievementName() const;
    startSceneExecute(al::Scene const*);
    endSceneExecute(al::Scene const*);
    isExecuteScene() const;
    checkEndSceneExecuteAndReset(al::LiveActor const*);
    ~EventFlowSceneExecuteCtrl();
};
