#pragma once

class CandlestandSaveWatcher
{
public:
    CandlestandSaveWatcher(char const*);
    init(al::ActorInitInfo const&);
    exeOffWait();
    exeWaitOnDemo();
    exePlayingOnDemo();
    exeOnWait();
};
