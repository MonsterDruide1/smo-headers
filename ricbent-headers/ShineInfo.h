#pragma once

class ShineInfo
{
public:
    ShineInfo();
    clear();
    init(char const*, char const*, char const*, QuestInfo const*, int);
    initForHintPhoto(al::LiveActor const*, al::IUseMessageSystem const*, al::ActorInitInfo const&);
    isEmpty() const;
    isEqual(ShineInfo const*) const;
    isEqual(ShineData const*) const;
    writeShineData(ShineData*) const;
    readShineData(ShineData const*);
    readShineData(UniqObjInfo const*);
    copyShineInfo(ShineInfo const*);
};
