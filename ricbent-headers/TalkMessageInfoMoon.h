#pragma once

class TalkMessageInfoMoon
{
public:
    TalkMessageInfoMoon(char const*);
    initPlacement(al::ActorInitInfo const&, al::PlacementInfo const&);
    update();
    isRequest() const;
    accepted();
};
