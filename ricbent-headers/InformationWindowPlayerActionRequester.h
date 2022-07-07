#pragma once

class InformationWindowPlayerActionRequester
{
public:
    InformationWindowPlayerActionRequester(InformationWindowRequestHolder*, InformationWindowStateHolder*, al::PlayerHolder const*);
    cancel(TutorialInfo const*);
    update();
    requestAppearPlayerAction(al::IUseSceneObjHolder const*, char const*);
    requestClosePlayerAction(al::IUseSceneObjHolder const*, char const*);
};
