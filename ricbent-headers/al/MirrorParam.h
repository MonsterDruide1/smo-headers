#pragma once

namespace al { 

class MirrorParam
{
public:
    MirrorParam();
    calcTexWidth() const;
    calcTexHeight() const;
    getMirror1ActorName() const;
    getMirror2ActorName() const;
    getMirror1OffsetY() const;
    getMirror2OffsetY() const;
    getMirrorBlurType() const;
    getMirrorBlurCount() const;
    getMirror1NearOffset() const;
    getMirror2NearOffset() const;
    isPortalMode() const;
    getParamName() const;
    getParamObj();
    getParamObj() const;
};

} 
