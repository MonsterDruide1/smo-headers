#pragma once

namespace TimeBalloon { 

class BalloonData
{
public:
    setRatingInfo(nn::nex::qMap<signed char, nn::nex::DataStoreRatingInfo> const&);
    setGotIdList(nn::nex::qVector<nn::nex::qBuffer> const&);
    setPlayedIdList(nn::nex::qVector<nn::nex::qBuffer> const&);
    getGotIdList() const;
    getPlayedIdList() const;
    ~BalloonData();
};

} 
