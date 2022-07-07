#pragma once

class MiniGameMenu
{
public:
    MiniGameMenu(al::LayoutInitInfo const&);
    appear();
    appearMenuCommon(char const*);
    appearTimeBalloonPutMenu();
    appearTimeBalloonFindMenu(int, bool);
    appearYukimaruRaceMenu(int);
    appearRunRaceMenu(int);
    end();
    kill();
    isDecideEnd() const;
    isCancelEnd() const;
    getSelectIndex() const;
    deactivate(int);
    activateAll();
    exeWait();
    exeDecide();
    exePushButtonEnd();
    exeMenuEnd();
    ~MiniGameMenu();
};
