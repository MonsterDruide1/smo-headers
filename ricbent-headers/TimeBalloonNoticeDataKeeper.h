#pragma once

class TimeBalloonNoticeDataKeeper
{
public:
    TimeBalloonNoticeDataKeeper(FriendsProfileDataHolder*);
    resetData();
    setData(TimeBalloon::NoticeDataMetaBinary const&, unsigned long, unsigned long);
    sortAndAddProfileData();
};
