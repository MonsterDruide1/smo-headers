#pragma once

class TimeBalloonPlayInput
{
public:
    TimeBalloonPlayInput(al::LiveActor const*);
    update();
    isSet() const;
    reset();
};
