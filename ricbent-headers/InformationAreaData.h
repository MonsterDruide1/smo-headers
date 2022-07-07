#pragma once

class InformationAreaData
{
public:
    InformationAreaData(al::ActorInitInfo const&, al::AreaObj const*, char const*, bool, InformationAreaData::PlayerType, int);
    isArea(al::AreaObj const*) const;
    getPriority() const;
};
