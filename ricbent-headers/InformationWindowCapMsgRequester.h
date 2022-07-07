#pragma once

class InformationWindowCapMsgRequester
{
public:
    InformationWindowCapMsgRequester(InformationWindowRequestHolder*, InformationWindowStateHolder*, al::PlayerHolder const*);
    requestAppearCapMsg(char const*);
    requestCloseCapMsg();
    update();
    retry(TutorialInfo*);
    exeStop();
    exeAppearCapMsgCapThrow();
    getNerveKeeper() const;
};
