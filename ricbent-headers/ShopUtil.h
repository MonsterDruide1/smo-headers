#pragma once

namespace ShopUtil {

makeExplainLabel(al::StringTmp<256>*, char const*, char const*, bool);
startNpcMessage(al::SimpleLayoutAppearWaitEnd*, char16_t const*, al::LiveActor*, char const*, bool*, al::TalkMessageVoicePlayer*);
startNpcMessage(al::SimpleLayoutAppearWaitEnd*, char const*, al::LiveActor*, char const*, bool*, al::TalkMessageVoicePlayer*);
getSystemMessageStringForShop(al::IUseMessageSystem const*, char const*);
getShopNameCityMan();
getShopNameCityWoman();
getShopNameSeaWoman();
getShopNameCapWoman();
getShopNameCapMan();
isShopWoman(char const*);
isShopCap(char const*);
getWaitShopInActionName(al::LiveActor const*);
getWaitShopOutActionName(al::LiveActor const*);
getTalkShopInActionName(al::LiveActor const*);
getTalkShopOutActionName(al::LiveActor const*);
getWelcomeShopInActionName(al::LiveActor const*);
getWelcomeShopOutActionName(al::LiveActor const*);

} 
