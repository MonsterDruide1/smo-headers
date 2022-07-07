#pragma once

namespace agl { namespace utl { 

class PrimitiveShape
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    PrimitiveShape();
    ~PrimitiveShape();
    initialize(sead::Heap*);
    setUpStreamQuad_(sead::Heap*);
    setUpStreamQuadTriangle_(sead::Heap*);
    setUpStreamCube_(sead::Heap*);
    setUpStreamPyramid_(sead::Heap*);
    setUpStreamCircle_(unsigned int, sead::Heap*);
    setUpStreamSphere_(unsigned int, unsigned int, sead::Heap*);
    setUpStreamHemisphere_(unsigned int, unsigned int, sead::Heap*);
    setUpStreamCylinder_(unsigned int, unsigned int, sead::Heap*);
    setUpStreamCapsule_(unsigned int, unsigned int, unsigned int, sead::Heap*);
    setUpStreamCone_(unsigned int, unsigned int, sead::Heap*);
    setUpStreamTorus_(unsigned int, unsigned int, sead::Heap*, float, float, int, int);
    setUpStreams_(agl::VertexBuffer*);
    calcVtxArrayNumCircle(unsigned int);
    calcIdxArrayNumCircle(unsigned int, agl::utl::PrimitiveShape::DrawType);
    calcIdxArrayNumCircle_(unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    setupVtxBufferCircle(agl::VertexBuffer*, agl::GPUMemAddr<agl::utl::PrimitiveShape::Vertex>, unsigned int);
    setupIdxStreamCircle(agl::IndexStream*, agl::GPUMemAddr<unsigned short>, unsigned int, agl::utl::PrimitiveShape::DrawType);
    setupIdxStreamCircle_<unsigned short>(agl::IndexStream*, agl::GPUMemAddr<unsigned short>, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    setupIdxStreamCircle(agl::IndexStream*, agl::GPUMemAddr<unsigned int>, unsigned int, agl::utl::PrimitiveShape::DrawType);
    setupIdxStreamCircle_<unsigned int>(agl::IndexStream*, agl::GPUMemAddr<unsigned int>, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    calcVtxArrayNumSphere(unsigned int, unsigned int);
    calcIdxArrayNumSphere(unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    calcIdxArrayNumSphere_(unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    setupVtxBufferSphere(agl::VertexBuffer*, agl::GPUMemAddr<agl::utl::PrimitiveShape::Vertex>, unsigned int, unsigned int);
    setupIdxStreamSphere(agl::IndexStream*, agl::GPUMemAddr<unsigned short>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    setupIdxStreamSphere_<unsigned short>(agl::IndexStream*, agl::GPUMemAddr<unsigned short>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    setupIdxStreamSphere(agl::IndexStream*, agl::GPUMemAddr<unsigned int>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    setupIdxStreamSphere_<unsigned int>(agl::IndexStream*, agl::GPUMemAddr<unsigned int>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    calcVtxArrayNumHemisphere(unsigned int, unsigned int);
    calcIdxArrayNumHemisphere(unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    calcIdxArrayNumHemisphere_(unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    setupVtxBufferHemisphere(agl::VertexBuffer*, agl::GPUMemAddr<agl::utl::PrimitiveShape::Vertex>, unsigned int, unsigned int);
    setupIdxStreamHemisphere(agl::IndexStream*, agl::GPUMemAddr<unsigned short>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    setupIdxStreamHemisphere_<unsigned short>(agl::IndexStream*, agl::GPUMemAddr<unsigned short>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    setupIdxStreamHemisphere(agl::IndexStream*, agl::GPUMemAddr<unsigned int>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    setupIdxStreamHemisphere_<unsigned int>(agl::IndexStream*, agl::GPUMemAddr<unsigned int>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    calcVtxArrayNumCylinder(unsigned int, unsigned int);
    calcIdxArrayNumCylinder(unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    calcIdxArrayNumCylinder_(unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    setupVtxBufferCylinder(agl::VertexBuffer*, agl::GPUMemAddr<agl::utl::PrimitiveShape::Vertex>, unsigned int, unsigned int);
    setupIdxStreamCylinder(agl::IndexStream*, agl::GPUMemAddr<unsigned short>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    setupIdxStreamCylinder_<unsigned short>(agl::IndexStream*, agl::GPUMemAddr<unsigned short>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    setupIdxStreamCylinder(agl::IndexStream*, agl::GPUMemAddr<unsigned int>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    setupIdxStreamCylinder_<unsigned int>(agl::IndexStream*, agl::GPUMemAddr<unsigned int>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    calcVtxArrayNumCapsule(unsigned int, unsigned int, unsigned int);
    calcIdxArrayNumCapsule(unsigned int, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    calcIdxArrayNumCapsule_(unsigned int, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    setupVtxBufferCapsule(agl::VertexBuffer*, agl::GPUMemAddr<agl::utl::PrimitiveShape::Vertex>, unsigned int, unsigned int, unsigned int);
    setupIdxStreamCapsule(agl::IndexStream*, agl::GPUMemAddr<unsigned short>, unsigned int, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    setupIdxStreamCapsule_<unsigned short>(agl::IndexStream*, agl::GPUMemAddr<unsigned short>, unsigned int, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    setupIdxStreamCapsule(agl::IndexStream*, agl::GPUMemAddr<unsigned int>, unsigned int, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    setupIdxStreamCapsule_<unsigned int>(agl::IndexStream*, agl::GPUMemAddr<unsigned int>, unsigned int, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    calcVtxArrayNumCone(unsigned int, unsigned int);
    calcIdxArrayNumCone(unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    calcIdxArrayNumCone_(unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    setupVtxBufferCone(agl::VertexBuffer*, agl::GPUMemAddr<agl::utl::PrimitiveShape::Vertex>, unsigned int, unsigned int);
    setupIdxStreamCone(agl::IndexStream*, agl::GPUMemAddr<unsigned short>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    setupIdxStreamCone_<unsigned short>(agl::IndexStream*, agl::GPUMemAddr<unsigned short>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    setupIdxStreamCone(agl::IndexStream*, agl::GPUMemAddr<unsigned int>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    setupIdxStreamCone_<unsigned int>(agl::IndexStream*, agl::GPUMemAddr<unsigned int>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    calcVtxArrayNumTorus(unsigned int, unsigned int);
    calcIdxArrayNumTorus(unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    calcIdxArrayNumTorus_(unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    setupVtxBufferTorus(agl::VertexBuffer*, agl::GPUMemAddr<agl::utl::PrimitiveShape::Vertex>, unsigned int, unsigned int, float, float, int, int);
    calcTorusCircleCenter_(int, int, float, float);
    setupIdxStreamTorus(agl::IndexStream*, agl::GPUMemAddr<unsigned short>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    setupIdxStreamTorus_<unsigned short>(agl::IndexStream*, agl::GPUMemAddr<unsigned short>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    setupIdxStreamTorus(agl::IndexStream*, agl::GPUMemAddr<unsigned int>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType);
    setupIdxStreamTorus_<unsigned int>(agl::IndexStream*, agl::GPUMemAddr<unsigned int>, unsigned int, unsigned int, agl::utl::PrimitiveShape::DrawType, agl::utl::PrimitiveShape::Quality);
    calcVtxArrayNumGridQuad(unsigned int, unsigned int);
    calcIdxArrayNumGridQuad(unsigned int, unsigned int);
    setupIdxStreamGridQuad(agl::IndexStream*, agl::GPUMemAddr<unsigned short>, unsigned int, unsigned int);
    setupIdxStreamGridQuad(agl::IndexStream*, agl::GPUMemAddr<unsigned int>, unsigned int, unsigned int);
    setupVtxBufferGridQuad(agl::VertexBuffer*, agl::GPUMemAddr<agl::utl::PrimitiveShape::Vertex>, unsigned int, unsigned int);
    calcVtxArrayNumGridCube(unsigned int, unsigned int, unsigned int);
    calcIdxArrayNumGridCube(unsigned int, unsigned int, unsigned int);
    setupIdxStreamGridCube(agl::IndexStream*, agl::GPUMemAddr<unsigned short>, unsigned int, unsigned int, unsigned int);
    setupIdxStreamGridCube(agl::IndexStream*, agl::GPUMemAddr<unsigned int>, unsigned int, unsigned int, unsigned int);
    setupVtxBufferGridCube(agl::VertexBuffer*, agl::GPUMemAddr<agl::utl::PrimitiveShape::Vertex>, unsigned int, unsigned int, unsigned int);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    sInstance;
};

} } 
