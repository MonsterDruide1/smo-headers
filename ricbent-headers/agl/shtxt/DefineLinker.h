#pragma once

namespace agl { namespace shtxt { 

class DefineLinker
{
public:
    DefineLinker();
    ~DefineLinker();
    clear();
    set(sead::Heap*, agl::shtxt::Clause const*, agl::shtxt::Clause const*);
    setImpl(sead::Heap*, agl::shtxt::Clause const*, agl::shtxt::Clause const*, bool);
    setDirect(agl::shtxt::Clause*, unsigned int, bool);
    updateHash();
    replace(sead::Heap*, agl::shtxt::Clause const*, agl::shtxt::Clause const*, bool);
    clone(sead::Heap*, sead::Heap*) const;
    cloneAll(sead::Heap*, sead::Heap*) const;
};

} } 
