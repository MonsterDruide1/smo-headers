#pragma once

namespace al { 

class BgmRhythmInfo
{
public:
    BgmRhythmInfo();
    BgmRhythmInfo(al::BgmRhythmInfo const&);
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmRhythmInfo const*, al::BgmRhythmInfo const*);
};

} 
