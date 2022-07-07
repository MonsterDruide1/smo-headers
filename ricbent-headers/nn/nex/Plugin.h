#pragma once

namespace nn { namespace nex { 

class Plugin
{
public:
    Plugin();
    ~Plugin();
    Unload();
    Trace(unsigned long);
    Initialize();
    ThreadAttach();
    ThreadDetach();
    Destroy();
    SetLibrary(void*);
    GetInstance();
    s_pInstance;
};

} } 
