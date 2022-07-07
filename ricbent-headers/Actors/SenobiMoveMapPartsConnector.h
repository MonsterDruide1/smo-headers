#pragma once

class SenobiMoveMapPartsConnector
{
public:
    SenobiMoveMapPartsConnector(char const*);
    init(al::ActorInitInfo const&);
    broadcastMsg(SenobiMoveMapParts*, float);
};
