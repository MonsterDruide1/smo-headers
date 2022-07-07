#pragma once

class BootLayout
{
public:
    BootLayout(al::LayoutInitInfo const&);
    appear();
    kill();
    startWipe();
    endWipe();
    end();
    endImmidiate();
    isEndWipe() const;
    getBgFrame() const;
    exeAppear();
    exeWait();
    exeStartWipe();
    exeEndWipe();
    exeEnd();
};
