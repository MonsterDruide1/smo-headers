#pragma once

class InformationWindowHackRequester
{
public:
    InformationWindowHackRequester(InformationWindowRequestHolder*, InformationWindowStateHolder*, al::PlayerHolder const*, al::AreaObjDirector*);
    init();
    update();
    accept(TutorialInfo*);
    endStart(TutorialInfo const*);
    cancel(TutorialInfo const*);
    done(TutorialInfo const*);
    setText(InformationWindowLayout*, TutorialInfo const*);
    changeText(char const*);
    requestHide();
    requestShow();
    setAppearDelayFrogFirst();
    setAppearDelayKoopaFirst();
    exeWaitNoHack();
    exeWaitAccept();
    exeAppearDelay();
    exeWaitHack();
    exeCountReappear();
    exeWaitHackReappear();
    exeCountReappearClose();
    exeHide();
    getNerveKeeper() const;
    getAreaObjDirector() const;
};
