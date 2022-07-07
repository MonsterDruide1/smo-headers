#pragma once

class TimeBalloonBalloonDataHolder
{
public:
    TimeBalloonBalloonDataHolder(int);
    reset();
    setData(TimeBalloon::BalloonDataMetaBinary const*, unsigned long, unsigned long, unsigned int, nn::nex::qMap<signed char, nn::nex::DataStoreRatingInfo> const&, FriendsProfileDataHolder*, bool);
    trySetData(TimeBalloon::BalloonDataMetaBinary const*, unsigned long, unsigned long, unsigned int, nn::nex::qMap<signed char, nn::nex::DataStoreRatingInfo> const&, FriendsProfileDataHolder*, bool);
    clearData(int);
    getData(int) const;
    tryGetData(int) const;
    tryGetData(unsigned long) const;
    tryGetDataByWorldTypeId(unsigned int) const;
    tryClearData(unsigned long);
};
