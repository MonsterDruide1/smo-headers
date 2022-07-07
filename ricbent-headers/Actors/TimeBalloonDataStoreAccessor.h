#pragma once

class TimeBalloonDataStoreAccessor
{
public:
    TimeBalloonDataStoreAccessor();
    init(al::ActorInitInfo const&);
    requestUpload(TimeBalloonData const*);
    getDataStoreDirector() const;
};
