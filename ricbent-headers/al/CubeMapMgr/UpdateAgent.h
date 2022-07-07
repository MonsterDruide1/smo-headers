#pragma once

namespace al { namespace CubeMapMgr { 

class UpdateAgent
{
public:
    UpdateAgent();
    ~UpdateAgent();
    setup(al::CubeMapMgr::CreatorUnit*, al::CubeMapMgr::CreatorUnit*, al::CubeMapMgr::ReservedUnit*, unsigned int, al::CubeMapMgr const*);
    terminate();
    getRenderBufferPtr() const;
    update();
    begin(agl::DrawContext*, unsigned int);
    end(agl::DrawContext*);
    backend(agl::DrawContext*);
};

} } 
