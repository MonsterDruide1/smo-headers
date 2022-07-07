#pragma once

namespace agl { namespace env { 

class EnvObj
{
public:
    postRead_();
    update();
    updateView(agl::env::EnvObj::ViewData const&, int);
    drawDebug(agl::DrawContext*, sead::Matrix34<float> const&, sead::Matrix44<float> const&, int) const;
    callbackLoadData();
    getEnvObjName() const;
    getGroupName() const;
    getObjName() const;
    isHostIOEnabled() const;
    getObjType() const;
    EnvObj();
    ~EnvObj();
    initialize_(int, int, agl::env::EnvObjMgr*, sead::Heap*);
    clear_();
    becomeDefaultName_();
    setGroupNameCopy(sead::SafeStringBase<char> const&);
    setEnable(bool);
    setEnvObjNameCopy(sead::SafeStringBase<char> const&);
    setEditable(bool);
    copyFrom(agl::env::EnvObj const&);
    copyFromImpl_(agl::env::EnvObj const&);
    update_();
    drawDebug_(agl::DrawContext*, sead::Matrix34<float> const&, sead::Matrix44<float> const&, int) const;
    drawDirectionalLight(agl::DrawContext*, int, sead::Vector3<float> const&, sead::Color4f const&, sead::Color4f const&, sead::Color4f const&) const;
    drawPointLight(agl::DrawContext*, int, sead::Vector3<float> const&, float, sead::Color4f const&, sead::Color4f const&) const;
    drawFog(agl::DrawContext*, int, float, float, sead::Vector3<float> const&, sead::Color4f const&) const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    listenNodeEvent(sead::hostio::NodeEvent const*);
    registClass(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, agl::env::EnvObj* (*)(sead::Heap*), agl::env::EnvObj::MetaInfo, unsigned int);
    searchTypeIndex(sead::SafeStringBase<char> const&);
    getMetaInfoName(agl::env::EnvObj::MetaInfo);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    initialize(int, sead::Heap*);
    sTypeNum;
    sTypeInfoTable;
};

} } 
