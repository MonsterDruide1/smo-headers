#pragma once

namespace eui { 

class MessageMgr
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    MessageMgr();
    ~MessageMgr();
    initialize(sead::Heap*, unsigned int);
    finalize();
    loadArchive(sead::Heap*, void*, unsigned int);
    unloadArchive(void*);
    getMessageSet(sead::SafeStringBase<char> const&) const;
    getLayoutMessageSet(sead::SafeStringBase<char> const&) const;
    setGradationColor(unsigned int, sead::Color4u8, sead::Color4u8);
    setTextBoxWidthSizeOverColor(sead::Color4u8);
    dumpLastGotMessageSetInfo();
    archiveDisposeCallback_(eui::MessageMgr::Archive*);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    sTextBoxWidthSizeOverColor;
    sInstance;
};

} 
