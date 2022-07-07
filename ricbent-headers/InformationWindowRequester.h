#pragma once

class InformationWindowRequester
{
public:
    endStart(TutorialInfo const*);
    cancel(TutorialInfo const*);
    retry(TutorialInfo*);
    accept(TutorialInfo*);
    done(TutorialInfo const*);
    InformationWindowRequester(InformationWindowRequestHolder*, InformationWindowStateHolder*, al::PlayerHolder const*);
    setText(InformationWindowLayout*, TutorialInfo const*);
    requestAppear(TutorialInfo const&);
    requestAppearForce(TutorialInfo const&);
    requestCancel(TutorialInfo const&);
    requestShowSystem();
    requestHideSystem();
};
