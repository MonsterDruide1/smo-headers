#pragma once

class SphinxQuizRouteKillExecutor
{
public:
    SphinxQuizRouteKillExecutor();
    registerKillSensor(al::HitSensor*);
    sendMsgSphinxQuizRouteKillInArea(al::HitSensor*, al::AreaObjGroup const*);
    getSceneObjName() const;
    ~SphinxQuizRouteKillExecutor();
};
