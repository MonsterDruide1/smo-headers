#pragma once

namespace al { 

class KCollisionServer
{
public:
    KCollisionServer();
    initKCollisionServer(void*, void const*);
    setData(void*);
    getInnerKcl(int) const;
    getNumInnerKcl() const;
    getV1Header(int) const;
    calcFarthestVertexDistance();
    getTriangleNum(al::KCPrismHeader const*) const;
    getPrismData(unsigned int, al::KCPrismHeader const*) const;
    isNearParallelNormal(al::KCPrismData const*, al::KCPrismHeader const*) const;
    isNanPrism(al::KCPrismData const*, al::KCPrismHeader const*) const;
    calcPosLocal(sead::Vector3<float>*, al::KCPrismData const*, int, al::KCPrismHeader const*) const;
    getMinMax(sead::Vector3<float>*, sead::Vector3<float>*) const;
    getAreaSpaceSize(sead::Vector3<float>*, al::KCPrismHeader const*) const;
    getAreaSpaceSize(int*, int*, int*, al::KCPrismHeader const*) const;
    getAreaSpaceSize(sead::Vector3<unsigned int>*, al::KCPrismHeader const*) const;
    checkPoint(sead::Vector3<float>*, float, float*);
    searchBlock(int*, sead::Vector3<unsigned int> const&, al::KCPrismHeader const*) const;
    checkSphere(sead::Vector3<float> const*, float, float, unsigned int, sead::FixedRingBuffer<al::KCHitInfo, 512>*);
    outCheckAndCalcArea(sead::Vector3<unsigned int>*, sead::Vector3<unsigned int>*, sead::Vector3<float> const&, sead::Vector3<float> const&, al::KCPrismHeader const*) const;
    KCHitSphere(al::KCPrismData const*, al::KCPrismHeader const*, sead::Vector3<float> const*, float, float, float*, unsigned char*);
    checkArrow(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::FixedRingBuffer<al::KCHitInfo, 512>*, unsigned int*, unsigned int) const;
    objectSpaceToAreaOffsetSpaceV3f(sead::Vector3<float>*, sead::Vector3<float> const&, al::KCPrismHeader const*) const;
    isInsideMinMaxInAreaOffsetSpace(sead::Vector3<unsigned int> const&, al::KCPrismHeader const*) const;
    KCHitArrow(al::KCPrismData const*, al::KCPrismHeader const*, sead::Vector3<float> const&, sead::Vector3<float> const&, float*, unsigned char*) const;
    checkSphereForPlayer(sead::Vector3<float> const*, float, float, unsigned int, sead::FixedRingBuffer<al::KCHitInfo, 512>*);
    KCHitSphereForPlayer(al::KCPrismData const*, al::KCPrismHeader const*, sead::Vector3<float> const*, float, float, float*, unsigned char*);
    checkDisk(sead::Vector3<float> const*, float, float, sead::Vector3<float> const&, float, unsigned int, sead::FixedRingBuffer<al::KCHitInfo, 512>*);
    KCHitDisk(al::KCPrismData const*, al::KCPrismHeader const*, sead::Vector3<float> const*, float, float, float, sead::Vector3<float> const&, float*, unsigned char*);
    searchPrism(sead::Vector3<float>*, float, sead::IDelegate2<al::KCPrismData const*, al::KCPrismHeader const*>&);
    searchPrismMinMax(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::IDelegate2<al::KCPrismData const*, al::KCPrismHeader const*>&);
    searchPrismArrow(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::IDelegate2<al::KCPrismData const*, al::KCPrismHeader const*>&);
    searchPrismDisk(sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, sead::IDelegate2<al::KCPrismData const*, al::KCPrismHeader const*>&);
    isParallelNormal(al::KCPrismData const*, al::KCPrismHeader const*) const;
    getFaceNormal(al::KCPrismData const*, al::KCPrismHeader const*) const;
    getEdgeNormal1(al::KCPrismData const*, al::KCPrismHeader const*) const;
    getEdgeNormal2(al::KCPrismData const*, al::KCPrismHeader const*) const;
    getEdgeNormal3(al::KCPrismData const*, al::KCPrismHeader const*) const;
    KCHitDisc(al::KCPrismData const*, al::KCPrismHeader const*, sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, sead::Vector3<float>*, float*);
    toIndex(al::KCPrismData const*, al::KCPrismHeader const*) const;
    getNormal(unsigned int, al::KCPrismHeader const*) const;
    calXvec(sead::Vector3<float> const*, sead::Vector3<float> const*, sead::Vector3<float>*);
    getVertexData(unsigned int, al::KCPrismHeader const*) const;
    getVertexNum(al::KCPrismHeader const*) const;
    getNormalNum(al::KCPrismHeader const*) const;
    getAttributeElementNum() const;
    getAttributes(al::ByamlIter*, unsigned int, al::KCPrismHeader const*) const;
    getAttributes(al::ByamlIter*, al::KCPrismData const*) const;
    objectSpaceToAreaOffsetSpace(sead::Vector3<unsigned int>*, sead::Vector3<float> const&, al::KCPrismHeader const*) const;
    areaOffsetSpaceToObjectSpace(sead::Vector3<float>*, sead::Vector3<unsigned int> const&, al::KCPrismHeader const*) const;
    doBoxCheck(sead::Vector3<float> const*, sead::Vector3<float> const*, sead::Vector3<unsigned int>*, sead::Vector3<unsigned int>*, al::KCPrismHeader const*);
    calcAreaBlockOffset(sead::Vector3<unsigned int> const&, al::KCPrismHeader const*) const;
    calcChildBlockOffset(sead::Vector3<unsigned int> const&, int);
    getBlockData(unsigned int const*, unsigned int);
};

} 
