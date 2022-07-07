#pragma once

class SphinxRideMiniGameNpc
{
public:
    SphinxRideMiniGameNpc(char const*);
    init(al::ActorInitInfo const&);
    control();
    exeTalkWait();
    exeTalkEnd();
    isNerveTalkEnd() const;
    hideModel();
    showModelAndAddDemo();
};
