#pragma once

namespace eui { 

class ScreenMgr
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    ScreenMgr();
    ~ScreenMgr();
    initialize(eui::ScreenMgr::InitializeArg const&);
    updateSystem();
    updateViewer_();
    update();
    updateScreenAll();
    updateScreen(signed char);
    draw(signed char, eui::DrawInfoEx::RenderBufferInfo const*);
    loadArchivesInDirectory(sead::Heap*, sead::SafeStringBase<char> const&);
    loadArchive(sead::Heap*, sead::SafeStringBase<char> const&);
    unloadAllArchives();
    findScreenByName(char const*);
    unloadScreen(int);
    resetScreenId(int);
    getMultiFilterParameterData(sead::SafeStringBase<char> const&) const;
    collectLoadScreenInfos(sead::Buffer<eui::ScreenMgr::LoadScreenInfo>*) const;
    loadScreensWithInfo(sead::Heap*, sead::Buffer<eui::ScreenMgr::LoadScreenInfo> const&, unsigned int, eui::Screen::OpenOption);
    setPrepareUnloadAllScreens();
    unloadAllScreens();
    inactivateScreen(int);
    activateScreen(int);
    eraseBoxCursorNodeFromRouteNodes(eui::BoxCursorNode const*);
    loadScreenImpl_(sead::Heap*, int, signed char, bool, sead::FrameHeap*);
    sInstance;
};

} 
