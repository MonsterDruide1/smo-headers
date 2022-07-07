#pragma once

namespace al { 

class BgmChordDetector
{
public:
    BgmChordDetector();
    init(al::AudioInfoListWithParts<al::BgmChordInfo> const*);
    update(float);
    forceUninitialized();
};

} 
