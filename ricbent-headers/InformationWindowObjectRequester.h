#pragma once

class InformationWindowObjectRequester
{
public:
    InformationWindowObjectRequester(InformationWindowRequestHolder*, InformationWindowStateHolder*, al::PlayerHolder const*);
    update();
    requestAppearObject(al::IUseSceneObjHolder const*, char const*);
    requestCloseObject(al::IUseSceneObjHolder const*, char const*);
    exeShow();
    exeHide();
    getNerveKeeper() const;
};
