#pragma once

namespace nn { namespace gfx { namespace detail { 

class GlslcDll
{
public:
    GetInstance();
    GlslcDll();
    ~GlslcDll();
    Initialize();
    Finalize();
    IsInitialized() const;
};

} } } 
