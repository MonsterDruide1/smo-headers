#pragma once

namespace al { 

class SePlayInfoInHitReaction
{
public:
    createInfo(al::ByamlIter const&);
    SePlayInfoInHitReaction();
    SePlayInfoInHitReaction(al::SePlayInfoInHitReaction const&);
    operator=(al::SePlayInfoInHitReaction const&);
    compareInfo(al::SePlayInfoInHitReaction const*, al::SePlayInfoInHitReaction const*);
};

} 
