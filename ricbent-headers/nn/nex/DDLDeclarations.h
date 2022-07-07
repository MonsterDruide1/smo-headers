#pragma once

namespace nn { namespace nex { 

class DDLDeclarations
{
public:
    RegisterIfRequired();
    DDLDeclarations(bool);
    ~DDLDeclarations();
    Unregister();
    UnregisterAll();
    LoadAll();
    Load();
    UnloadAll();
    Unload();
    ResetDOClassIDs();
    s_pFirstDDLDecl;
    s_uiBaseClassID;
};

} } 
