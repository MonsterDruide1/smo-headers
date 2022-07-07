#pragma once

class KakkuGlideAnimCtrl
{
public:
    KakkuGlideAnimCtrl(char const*, al::LiveActor*, KakkuStateGlide*);
    appear();
    isNormal() const;
    exeGlideNormal();
    tryChangeAnim();
    exeGlideLeftStart();
    exeGlideLeft();
    exeGlideRightStart();
    exeGlideRight();
    isCurrentLeftAnim() const;
    isCurrentRightAnim() const;
    ~KakkuGlideAnimCtrl();
};
