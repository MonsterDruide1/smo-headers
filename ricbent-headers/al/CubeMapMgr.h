#pragma once

namespace al { 

class CubeMapMgr
{
public:
    getCubeMapProjection(sead::PerspectiveProjection*, float, float);
    getCubeMapCamera(sead::DirectCamera*, unsigned int, sead::Vector3<float> const&);
    searchIlluminantEntity(sead::SafeStringBase<char> const&) const;
    searchIlluminantTexture(sead::SafeStringBase<char> const&) const;
    getNormalizeCoeff(al::CubeMapMgr::Unit const*, al::CubeMapMgr::HDREncodeType) const;
    genMessageIlluminantInfo(sead::hostio::Context*, al::CubeMapMgr::IlluminantInfo*, sead::SafeStringBase<char> const&);
    outputFile(agl::DrawContext*, al::CubeMapMgr::ReservedUnit*, bool) const;
    pushUpdateRequest(al::CubeMapMgr::ReservedUnit*);
    freeUnit(al::CubeMapMgr::ReservedUnit*);
    normalizeName(al::CubeMapMgr::ReservedUnit*) const;
    CubeMapMgr();
    clearIlluminant(bool);
    ~CubeMapMgr();
    initialize(al::CubeMapMgr::CreateArg const&, sead::Heap*);
    allocate();
    allocate(al::CubeMapMgr::ReservedUnit*);
    free(al::CubeMapMgr::ReservedUnit*);
    updateValidateInfo(bool);
    freeAll();
    isEnableUnit(al::CubeMapMgr::ReservedUnit*) const;
    getCubeMap(al::CubeMapMgr::ReservedUnit*) const;
    getCubeMap(sead::SafeStringBase<char> const&) const;
    getUnitIndex(al::CubeMapMgr::ReservedUnit*) const;
    getUnitName(al::CubeMapMgr::ReservedUnit*) const;
    setUnitName(al::CubeMapMgr::ReservedUnit*, sead::SafeStringBase<char> const&);
    searchUnitIndex(sead::SafeStringBase<char> const&) const;
    searchUnit(sead::SafeStringBase<char> const&) const;
    setUnitPosition(al::CubeMapMgr::ReservedUnit*, sead::Vector3<float> const&);
    getUnitPosition(al::CubeMapMgr::ReservedUnit const*) const;
    setUnitNearFar(al::CubeMapMgr::ReservedUnit*, float, float);
    getUnitNear(al::CubeMapMgr::ReservedUnit const*) const;
    getUnitFar(al::CubeMapMgr::ReservedUnit const*) const;
    setUnitRenderingNumber(al::CubeMapMgr::ReservedUnit*, unsigned int, bool);
    getUnitRenderingNumber(al::CubeMapMgr::ReservedUnit*) const;
    setUnitBufferClear(al::CubeMapMgr::ReservedUnit*, bool);
    setUnitAdhereCamera(al::CubeMapMgr::ReservedUnit*, bool);
    isUnitRenderingFinished(al::CubeMapMgr::ReservedUnit const*) const;
    setUnitIlluminantInfo(al::CubeMapMgr::ReservedUnit*, unsigned int, al::CubeMapMgr::IlluminantInfoArg const&);
    getUnitIlluminantInfo(al::CubeMapMgr::IlluminantInfoArg*, al::CubeMapMgr::ReservedUnit const*, unsigned int) const;
    setUnitDebugInfo(al::CubeMapMgr::ReservedUnit*, al::CubeMapMgr::UnitDebugInfoArg const&);
    outputArrayFile(agl::DrawContext*, bool) const;
    setUnitFileName(al::CubeMapMgr::ReservedUnit*, sead::SafeStringBase<char> const&) const;
    outputFileUnit(agl::DrawContext*, al::CubeMapMgr::ReservedUnit*) const;
    outputFileUnit(agl::DrawContext*, al::CubeMapMgr::ReservedUnit*, sead::SafeStringBase<char> const&) const;
    pushUpdateRequestAll();
    eraseUpdateRequest(al::CubeMapMgr::ReservedUnit*);
    eraseUpdateRequestAll();
    hasUpdateRequest(al::CubeMapMgr::ReservedUnit*);
    popUpdateRequest(al::CubeMapMgr::UpdateAgent*, bool, unsigned int);
    rebindIlluminant();
    addIlluminantEntity(sead::SafeStringBase<char> const&, sead::Vector3<float> const*);
    addIlluminantTexture(sead::SafeStringBase<char> const&, agl::TextureSampler const*);
    drawIlluminant(agl::DrawContext*, al::CubeMapMgr::ReservedUnit const*, sead::Projection const*, sead::Camera const*) const;
    drawDebug(agl::DrawContext*, agl::RenderBuffer const*, sead::Projection const*, sead::Camera const*, bool) const;
    postRead_();
    allocateUnit();
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} 
