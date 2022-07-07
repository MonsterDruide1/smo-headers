#pragma once

class CounterLifeCtrl
{
public:
    CounterLifeCtrl(al::LayoutInitInfo const&, al::PlayerHolder const*, al::SubCameraRenderer const*);
    setCount(int);
    tryUpdateCount(int);
    tryStartDemoLifeUp(bool);
    appear();
    end();
    kill();
    killAllLayout();
    isEndLifeDemo() const;
    exeAppear();
    setTransAllLayout(sead::Vector3<float> const&);
    getInitTrans() const;
    appearAllLayout();
    startAllLayout();
    getCurrentLayout() const;
    exeWait();
    waitAllLayout();
    updateTransAllLayout();
    tryChangeCount();
    exeEnd();
    exeDead();
    exeCountStartFadeOut();
    exeCountStartFadeIn();
    exeCount();
    startCountAnim(int);
    exeCountEnd();
    exeDemoLifeMaxUpStartFadeIn();
    updateTrans(al::LayoutActor*);
    exeDemoLifeMaxUpAddLife();
    exeDemoLifeMaxUpWaitForMove();
    exeDemoLifeMaxUpMove();
    calcLayoutTransByPlayer(sead::Vector3<float>*);
    exeDemoLifeMaxUpUnite();
    startActionAllLayout(char const*, char const*);
    ~CounterLifeCtrl();
};
