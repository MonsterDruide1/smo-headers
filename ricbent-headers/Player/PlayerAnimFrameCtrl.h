#pragma once

class PlayerAnimFrameCtrl
{
public:
    PlayerAnimFrameCtrl();
    startAction(al::LiveActor*, sead::SafeStringBase<char> const&);
    changeActionName(al::LiveActor*, sead::SafeStringBase<char> const&);
    update();
    updateSync(al::LiveActor*);
    setFrame(float);
    getActionName() const;
    getCurrentFrame() const;
    getRate() const;
    isActionEnd() const;
};
