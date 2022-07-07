#pragma once

namespace al { 

class GraphicsPresetDirector
{
public:
    GraphicsPresetDirector(al::GraphicsSystemInfo*);
    initProjectResource();
    registerPreset(char const*, char const*, char const*, bool);
    findPreset(char const*) const;
    endInit();
    clearRequest();
    update();
    requestPreset(char const*, int, int, int, sead::Vector3<float> const&);
    findDefaultPreset() const;
    findPreset(int) const;
    findPresetId(char const*) const;
    calcPresetNum() const;
};

} 
