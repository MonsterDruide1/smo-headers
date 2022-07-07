#pragma once

class SessionBgmCtrlObj
{
public:
    SessionBgmCtrlObj(char const*);
    init(al::ActorInitInfo const&);
    control();
};
