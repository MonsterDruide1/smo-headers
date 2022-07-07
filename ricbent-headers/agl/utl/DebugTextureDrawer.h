#pragma once

namespace agl { namespace utl { 

class DebugTextureDrawer
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    DebugTextureDrawer();
    ~DebugTextureDrawer();
    destroy();
    initialize(sead::Heap*);
    inactivateAll();
    entryPage_(agl::utl::DebugTexturePage*);
    erasePage_(agl::utl::DebugTexturePage*);
    eraseActivePage_(agl::utl::DebugTexturePage*);
    pushBack_(agl::utl::DebugTexture*);
    popBack_();
    draw(agl::DrawContext*, sead::LogicalFrameBuffer const&, sead::Viewport const&) const;
    clearEntryTextures();
    searchPage(sead::SafeStringBase<char> const&);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    listenNodeEvent(sead::hostio::NodeEvent const*);
    invalidateHostIoNode_(agl::utl::DebugTexturePage*);
    copyTextureLabel_(int, sead::SafeStringBase<char> const&);
    sInstance;
};

} } 
