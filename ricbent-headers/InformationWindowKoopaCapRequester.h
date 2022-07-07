#pragma once

class InformationWindowKoopaCapRequester
{
public:
    InformationWindowKoopaCapRequester(InformationWindowRequestHolder*, InformationWindowStateHolder*, al::PlayerHolder const*);
    accept(TutorialInfo*);
    cancel(TutorialInfo const*);
    requestAppearKoopaCap(bool);
    requestCloseKoopaCap();
    update();
    exeStop();
    exeHide();
    exeCountAppear();
    exeCountReappear();
    exeShowReappear();
    exeCountReappearClose();
    getNerveKeeper() const;
};
