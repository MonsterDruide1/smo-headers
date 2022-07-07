#pragma once

namespace al { 

class DynamicTexAlloc
{
public:
    DynamicTexAlloc(bool);
    ~DynamicTexAlloc();
    getAlloc() const;
    freeTex(agl::TextureData*);
};

} 
