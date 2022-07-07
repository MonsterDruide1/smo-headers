#pragma once

namespace eui { 

class BoxCursorNode
{
public:
    BoxCursorNode();
    ~BoxCursorNode();
    initialize(eui::AnimButton*, eui::Screen*);
    eraseNodeFromRouteNodes(eui::BoxCursorNode const*);
    isMovable(eui::DrawTarget) const;
    isDecidable(eui::DrawTarget, bool) const;
    getPosition(sead::Vector2<float>*) const;
    setRouteNodeEach(eui::Direction, eui::BoxCursorNode*);
    clearRouteAll();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
