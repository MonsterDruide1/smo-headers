#pragma once

namespace agl { namespace env { 

class EnvObjMgr
{
public:
    EnvObjMgr();
    ~EnvObjMgr();
    initialize(agl::env::EnvObjMgr::InitArg const&, sead::Heap*);
    removeObj(agl::env::EnvObj*);
    clear(int);
    reconstruct();
    update();
    constructList();
    updateView(sead::Matrix34<float> const&, sead::Matrix44<float> const&, int);
    drawDebug(agl::DrawContext*, int, agl::RenderBuffer const*, float) const;
    drawDirectionalLight_(agl::DrawContext*, int, agl::env::EnvObj const&, sead::Vector3<float> const&, sead::Color4f const&, sead::Color4f const&, sead::Color4f const&) const;
    drawPointLight_(agl::DrawContext*, int, agl::env::EnvObj const&, sead::Vector3<float> const&, float, sead::Color4f const&, sead::Color4f const&) const;
    drawFog_(agl::DrawContext*, int, agl::env::EnvObj const&, float, float, sead::Vector3<float> const&, sead::Color4f const&) const;
    listenPropertyEventFromGroup(agl::utl::INamedObjMgr::GroupEventType, agl::utl::INamedObjMgr::Group*);
    saveImpl_(sead::SafeStringBase<char> const&, unsigned int, int) const;
    applyResource_(agl::utl::ResParameterArchive, agl::utl::ResParameterArchive, float, int);
    saveToGroupFilePath(sead::SafeStringBase<char> const&) const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    save(sead::SafeStringBase<char> const&, unsigned int) const;
    applyResParameterArchive(agl::utl::ResParameterArchive);
    getSaveFilePath() const;
    getNamedObjName(int, int) const;
    getNamedObjNum(int) const;
};

} } 
