#pragma once

class EnemyStateReviveInsideScreen
{
public:
    EnemyStateReviveInsideScreen(al::LiveActor*);
    appear();
    kill();
    startRevive();
    isDisappear() const;
    exeHide();
    exeDelay();
    exeAppearSign();
    ~EnemyStateReviveInsideScreen();
};
