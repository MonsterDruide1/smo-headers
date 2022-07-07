#pragma once

namespace al { 

class IndexData
{
public:
    IndexData(al::CulledIndexCreateArg const&);
    initIndirectData(int, int, int);
    finalize();
    clearAndFlushIndirectData(int, int, int);
    drawElementIndirect(agl::DrawContext*, int);
    clearIndirectData(agl::DrawContext*, int);
    prepareDrawCulling(agl::DrawContext*, al::CulledIndexCreateArg const&) const;
    prepareDrawCullingSubMesh(agl::DrawContext*, int) const;
};

} 
