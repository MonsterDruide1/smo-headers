#pragma once

namespace eui { namespace MessageMgr { 

class Archive
{
public:
    getMessageSet(sead::SafeStringBase<char> const&) const;
    Archive(eui::MessageMgr*, sead::Heap*);
    ~Archive();
    load(sead::Heap*, void*, unsigned int);
    unload();
    findMessageSetName(sead::BufferedSafeStringBase<char>*, eui::MessageSet const*);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} } 
