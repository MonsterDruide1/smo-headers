#pragma once

class TimeBalloonNotifier
{
public:
    TimeBalloonNotifier(al::ActorInitInfo const&, FriendsProfileDataHolder*);
    settingPlayed(int, nn::nex::qVector<unsigned long> const*, int);
    settingGot(int, nn::nex::qVector<unsigned long> const*, unsigned int);
    settingRankUp();
    requestEnd();
    isEnd();
};
