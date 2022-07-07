#pragma once

class InformationWindowBindRequester
{
public:
    InformationWindowBindRequester(InformationWindowRequestHolder*, InformationWindowStateHolder*, al::PlayerHolder const*);
    requestAppearBind(BindInfo const&);
    requestCloseBind();
    closeReappear();
    update();
    accept(TutorialInfo*);
    done(TutorialInfo const*);
    exeStop();
    exeWaitFirst();
    exeWaitAccept();
    exeCountReappear();
    exeWaitReappear();
    exeCountReappearClose();
    getNerveKeeper() const;
};
