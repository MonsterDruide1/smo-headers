#pragma once

class HintPhotoLayoutHolder
{
public:
    HintPhotoLayoutHolder();
    init(al::LayoutInitInfo const&);
    isInit() const;
    getPhotoLayout() const;
    getDecideIcon() const;
    getSceneObjName() const;
    ~HintPhotoLayoutHolder();
};
