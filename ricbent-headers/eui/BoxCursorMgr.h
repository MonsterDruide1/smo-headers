#pragma once

namespace eui { 

class BoxCursorMgr
{
public:
    BoxCursorMgr();
    ~BoxCursorMgr();
    findNodeByName(eui::Screen*, char const*);
    findNodeByName(char const*, char const*);
    findNodeByNameWithParentParts_(eui::Screen*, char const*, char const*);
    findNodeByNameWithParentParts_(char const*, char const*, char const*);
    findNodeByTag(eui::Screen*, int);
    findNodeByTag(char const*, int);
    moveBoxCursor(eui::BoxCursorNode const*);
    update();
    updateDrawTarget(eui::DrawTarget);
    getActiveNodeScreen(eui::DrawTarget);
    isEqualActiveNodePartsLayoutName(eui::DrawTarget, sead::SafeStringBase<char> const&) const;
    setEnable(eui::DrawTarget, bool);
    setAction(eui::BoxCursorMgr::Action);
    setActionWithController(sead::ControllerBase const*);
    eraseNodeLinks(eui::BoxCursorNode const*);
    registerControl(eui::DrawTarget, eui::BoxCursorControl*);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
