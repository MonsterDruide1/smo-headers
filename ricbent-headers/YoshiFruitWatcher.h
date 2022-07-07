#pragma once

class YoshiFruitWatcher
{
public:
    YoshiFruitWatcher();
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    registerShineHolder(YoshiFruitShineHolder*);
    registerFruit(al::LiveActor*, SaveObjInfo*);
    noticeCurrentHackYoshi(Yoshi*);
    noticeGetFruit(al::LiveActor*, SaveObjInfo*);
    saveGetFruit();
    control();
    exeWait();
    exeGaugeAppear();
    exeGaugeWait();
    exeGaugeEnd();
    exeDemoRequest();
    exeDemoGauge();
    exeDemoShine();
    getSceneObjName() const;
    ~YoshiFruitWatcher();
};
