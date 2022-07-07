#pragma once

namespace al { 

class ShaderMirrorDirector
{
public:
    ShaderMirrorDirector();
    ~ShaderMirrorDirector();
    endInit();
    clearRequest();
    update();
    getCurrentParam();
    findMirrorActor(char const*) const;
    requestParam(int, int, al::MirrorParam const&);
    startRendering();
    endRendering(agl::DrawContext*, agl::TextureData const*);
    release(agl::DrawContext*);
    activateMirrorTexture(agl::DrawContext*, int) const;
    getMirrorTextureData(int) const;
    isEnable() const;
    pushBackMirrorActor(al::LiveActor*, al::ActorInitInfo const&);
    calcMirrorRenderBufferSize(sead::Vector2<int>*) const;
    getCurrentParam() const;
    getRenderingCameraNearOffset() const;
    getRenderingCamera() const;
    getMirrorCamera(al::LiveActor const*) const;
    tryFindMirrorTextureId(al::LiveActor const*) const;
    getMirrorActorName(int) const;
    findMirrorActorIndex(char const*) const;
};

} 
