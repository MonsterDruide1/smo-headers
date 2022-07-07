#pragma once

namespace al { 

class ShaderHolder
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    ShaderHolder();
    init();
    initAndLoadAllFromDir(char const*, sead::Heap*, sead::Heap*);
    loadAll(char const*, sead::Heap*, char const*);
    load(char const*, char const*, sead::Heap*, unsigned int);
    tryGetShaderProgram(char const*) const;
    getShaderProgram(char const*) const;
    getShadingModel(char const*, char const*) const;
    ~ShaderHolder();
    sInstance;
};

} 
