#pragma once

class TimeBalloonSaveData
{
public:
    TimeBalloonSaveData();
    init();
    write(al::ByamlWriter*);
    read(al::ByamlIter const&);
};
