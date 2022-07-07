#pragma once

class KoopaCappyEyes2D
{
public:
    KoopaCappyEyes2D(char const*);
    init(al::ActorInitInfo const&);
    appear();
    disappear();
    isPlayingAppearAnim() const;
    exeAppear();
    exeWait();
    exeDisappear();
};
