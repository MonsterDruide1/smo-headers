#pragma once

class TimeBalloonNoticeSequenceData
{
public:
    TimeBalloonNoticeSequenceData();
    setPlayedPlayer(int, nn::nex::qVector<unsigned long> const&);
    setGotPlayer(int, nn::nex::qVector<unsigned long> const&, unsigned int);
};
