#pragma once

class PlayRecorder
{
public:
    PlayRecorder(char const*);
    init(al::ActorInitInfo const&);
    exeRecord();
    exeEnd();
};
