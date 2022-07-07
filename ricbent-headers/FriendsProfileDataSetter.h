#pragma once

class FriendsProfileDataSetter
{
public:
    FriendsProfileDataSetter(FriendsProfileDataHolder*);
    FriendsProfileDataSetter(al::IUseSceneObjHolder const*, FriendsProfileDataHolder*);
    execute();
};
