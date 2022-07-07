#pragma once

namespace al { 

class BgmPlayPointRecorder
{
public:
    BgmPlayPointRecorder();
    reset();
    tryRecordStopPosition(char const*, long);
    tryRecordPausePosition(char const*, long);
    getRecordedStopPosition(char const*) const;
    getRecordedPausePosition(char const*) const;
};

} 
