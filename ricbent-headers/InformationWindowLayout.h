#pragma once

class InformationWindowLayout
{
public:
    InformationWindowLayout(al::LayoutInitInfo const&);
    changeSeparatePlay();
    isSeparateTutorial() const;
    isSingleTutorial() const;
    changeSinglePlay();
    setSeparatePlayerOnlyLayout();
    setSinglePlayLayout();
    setHackTutorial(al::LiveActor const*, char const*);
    setTutorial(char const*);
    setSeparatePlayTutorial(char const*, char const*);
    setAreaTutorial(char16_t const*);
    appear();
    end();
    getTutorialMstxtName() const;
    isWait() const;
    exeAppear();
    exeWait();
    exeEnd();
};
