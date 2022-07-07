#pragma once

class CapMessageKeeper
{
public:
    CapMessageKeeper();
    createAndReadYamlAll();
    isShowCapMsg(al::IUseSceneObjHolder const*, int);
    isShowCapMsgCurrentWorld(al::IUseSceneObjHolder const*, CapMessageKeeper::CapMsgType const&);
    tryShowSaveCapMsg(al::IUseSceneObjHolder const*, CapMessageKeeper::CapMsgType const&, bool);
    tryShowCapMsgPrivate(al::IUseSceneObjHolder const*, CapMessageKeeper::CapMsgType const&, char const*, int, bool, bool);
    tryCheckShowCapMsg(al::IUseSceneObjHolder const*, CapMessageKeeper::CapMsgType const&, CapMessageEnableChecker*, bool);
    saveCapMsg(al::IUseSceneObjHolder const*, int);
    tryShowCapMsgPriorityLow(al::IUseSceneObjHolder const*, CapMessageKeeper::CapMsgType const&, int, int);
    tryReadYamlOne(al::Resource const*, char const*, int*, int*);
    tryShowCapMsgCurrentWorld(al::IUseSceneObjHolder const*, CapMessageKeeper::CapMsgType const&);
    saveCapMsgCurrentWorld(al::IUseSceneObjHolder const*, CapMessageKeeper::CapMsgType const&);
    saveCapMsg(al::IUseSceneObjHolder const*, char const*);
    getCapMessageParam(CapMessageKeeper::CapMsgType const&);
};
