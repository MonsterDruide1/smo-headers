#pragma once

namespace al { 

class SeHitReactionInfo
{
public:
    createInfo(al::ByamlIter const&);
    SeHitReactionInfo();
    SeHitReactionInfo(al::SeHitReactionInfo&);
    compareInfo(al::SeHitReactionInfo const*, al::SeHitReactionInfo const*);
};

} 
