#pragma once

class InformationWindowSeparatePlayRequester
{
public:
    InformationWindowSeparatePlayRequester(InformationWindowRequestHolder*, InformationWindowStateHolder*, al::PlayerHolder const*);
    update();
    done(TutorialInfo const*);
    cancel(TutorialInfo const*);
    setText(InformationWindowLayout*, TutorialInfo const*);
    changeSinglePlay();
    changeSeparatePlay();
    changeEnableCap();
    changeDisableCap();
    exeFirst();
    exeRemoveByJango();
    exeInvalid();
    exeStop();
    tryStopByJango();
    exeHide();
    exeCountReappear();
    exeWaitReappear();
    exeCountReappearClose();
    getNerveKeeper() const;
};
