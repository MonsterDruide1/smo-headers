#pragma once

namespace al { 

class LayoutKeeper
{
public:
    LayoutKeeper();
    initScreen(eui::Screen*);
    initLayout(nn::ui2d::Layout*, al::LayoutResource*);
    initDrawInfo(nn::ui2d::DrawInfo*);
    initTagProcessor(al::CustomTagProcessor*);
    getGroup(char const*) const;
    getGroup(int) const;
    getGroupNum() const;
    calcAnim(bool);
    draw();
};

} 
