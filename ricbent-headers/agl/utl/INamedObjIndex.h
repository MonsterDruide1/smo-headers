#pragma once

namespace agl { namespace utl { 

class INamedObjIndex
{
public:
    INamedObjIndex();
    INamedObjIndex(sead::FixedSafeString<32> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, agl::utl::IParameterObj*);
    ~INamedObjIndex();
    bind(agl::utl::INamedObjMgr*);
    syncIndexToName();
    syncNameToIndex();
    genComboBoxSelect(sead::hostio::Context*, bool);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} } 
