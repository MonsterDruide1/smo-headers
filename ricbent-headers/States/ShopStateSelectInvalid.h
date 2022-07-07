#pragma once

class ShopStateSelectInvalid
{
public:
    ShopStateSelectInvalid(ShopStateInShop*, char const*, CommonHorizontalList*, al::SimpleLayoutAppearWaitEnd*, char const*, al::TalkMessageVoicePlayer*);
    setting(char const*, int, al::LiveActor*);
    appear();
    exeDecide();
    exeShowText();
    exeAppearExplain();
    ~ShopStateSelectInvalid();
};
