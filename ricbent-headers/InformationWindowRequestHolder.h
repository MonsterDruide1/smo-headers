#pragma once

class InformationWindowRequestHolder
{
public:
    InformationWindowRequestHolder();
    requestAppear(TutorialInfo const&);
    requestCancel(TutorialInfo const&);
    requestChangeText(TutorialInfo const&);
    requestAppearMovie(TutorialInfo const&);
    requestKillMovie(TutorialInfo const&);
    requestAppearSystem();
    requestCloseSystem();
    reflesh(TutorialInfo const*);
    tryFindHighPriorityInfo(int*);
    tryFindInfo(TutorialType);
    show(TutorialType);
    hide(TutorialType);
    cancel(TutorialInfo const*);
    invalidate(TutorialType);
    endStart(TutorialInfo const*);
    done(TutorialInfo const*);
    killNotRetry();
    killCanceled();
    isExist(TutorialType, char const*) const;
    isExist(TutorialInfo const&) const;
    calcCount() const;
};
