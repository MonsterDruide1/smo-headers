#pragma once

namespace al { 

class RandomTextureKeeper
{
public:
    RandomTextureKeeper();
    makeRandomTexture();
    ~RandomTextureKeeper();
    getRandomTex1DSampler() const;
};

} 
