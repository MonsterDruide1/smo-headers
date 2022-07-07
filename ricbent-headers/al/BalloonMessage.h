#pragma once

namespace al { 

class BalloonMessage
{
public:
    create(al::LiveActor const*, al::LayoutInitInfo const&, al::BalloonMessageInitParam const&, bool);
    BalloonMessage(al::LiveActor const*, al::LayoutInitInfo const&, al::BalloonMessageInitParam const&, bool);
    setText(char const*);
    appear();
    updateTrans();
    hidePushA();
    isEnableAppear() const;
    appearWithPushA();
    showPushA();
    control();
    update();
    isWait() const;
    isVoicePlayerPlaying() const;
    isShowPushA() const;
    isEnableEnd() const;
    end();
    setTextW(char16_t const*);
    exeAppear();
    exeWait();
    exeEnd();
    exeHide();
    isNearPlayerActor(float) const;
};

} 
