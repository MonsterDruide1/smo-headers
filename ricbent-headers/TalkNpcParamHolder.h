#pragma once

class TalkNpcParamHolder
{
public:
    TalkNpcParamHolder();
    findOrCreateParam(al::LiveActor const*, char const*);
    tryFindParamLocal(al::LiveActor const*, char const*) const;
    getSceneObjName() const;
    ~TalkNpcParamHolder();
};
