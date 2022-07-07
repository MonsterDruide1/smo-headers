#pragma once

class InformationWindowTextChanger
{
public:
    InformationWindowTextChanger(al::LayoutActor*);
    update(TutorialInfo*, al::LiveActor*);
};
