#pragma once

namespace al { 

class LayoutActionKeeper
{
public:
    LayoutActionKeeper(al::LayoutKeeper*, al::IUseAudioKeeper*, al::IUseEffectKeeper*);
    startAction(char const*, char const*);
    findPaneGroupInfo(char const*) const;
    update();
    setMainGroupName(char const*);
    getLayoutPaneGroup(char const*) const;
};

} 
