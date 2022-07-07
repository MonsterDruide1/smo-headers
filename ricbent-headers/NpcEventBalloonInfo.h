#pragma once

class NpcEventBalloonInfo
{
public:
    NpcEventBalloonInfo();
    setupForMessageBalloon(al::LiveActor const*, char16_t const*, al::MessageTagDataHolder const*);
    reset();
    setupForEmotionIconBalloon(al::LiveActor const*, char const*);
    setupForTalkIconBalloon(al::LiveActor const*, char const*, bool);
    setCommonParam(NpcEventBalloonRequestInfo const&);
    makeTextW(sead::BufferedSafeStringBase<char16_t>*, al::IUseMessageSystem const*) const;
    isTypeMessage() const;
    isTypeEmotionIcon() const;
    isTypeTalkIcon() const;
};
