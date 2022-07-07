#pragma once

class AmiiboNpcLayout
{
public:
    AmiiboNpcLayout(al::LayoutInitInfo const&);
    startTouch();
    endTouch();
    appear();
    control();
    decide();
    end();
    isIconEndActionEnd() const;
    exeAppear();
    exeWait();
    exeDecide();
    exeEnd();
};
