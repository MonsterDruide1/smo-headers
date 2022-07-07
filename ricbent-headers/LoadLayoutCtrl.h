#pragma once

class LoadLayoutCtrl
{
public:
    LoadLayoutCtrl(al::LayoutInitInfo const&);
    startWaitLoad();
    endLoad();
    exeWaitCount();
    exeWaitLoad();
    hideTxtPane();
    exeEndLoad();
    ~LoadLayoutCtrl();
};
