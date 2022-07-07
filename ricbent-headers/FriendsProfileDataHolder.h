#pragma once

class FriendsProfileDataHolder
{
public:
    create(al::LayoutInitInfo const&, int, nn::friends::ImageSize);
    create(al::ActorInitInfo const&, int, nn::friends::ImageSize);
    create(int, nn::friends::ImageSize);
    FriendsProfileDataHolder(int, nn::friends::ImageSize, agl::DrawContext*);
    findProfileData(IUseFriendProfileDataHolder const*);
    tryFind(unsigned long) const;
    tryAddProfileData(IUseFriendProfileDataHolder const*);
    tryAdd(unsigned long);
    clearAll();
};
