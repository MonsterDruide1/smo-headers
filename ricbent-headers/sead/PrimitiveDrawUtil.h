#pragma once

namespace sead { namespace PrimitiveDrawUtil {

setQuadVertex(sead::PrimitiveDrawUtil::Vertex*, unsigned short*);
setCubeVertex(sead::PrimitiveDrawUtil::Vertex*, unsigned short*);
setWireCubeVertex(sead::PrimitiveDrawUtil::Vertex*, unsigned short*);
setSphereVertex(sead::PrimitiveDrawUtil::Vertex*, unsigned short*, int, int);
setDiskVertex(sead::PrimitiveDrawUtil::Vertex*, unsigned short*, int);
setLineVertex(sead::PrimitiveDrawUtil::Vertex*, unsigned short*);
setCylinderVertex(sead::PrimitiveDrawUtil::Vertex*, unsigned short*, int);

} } 
