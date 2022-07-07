#pragma once

namespace agl { namespace detail { 

class FileIOMgr
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    FileIOMgr();
    ~FileIOMgr();
    initialize(agl::detail::FileIOMgr::CreateArg const&, sead::Heap*);
    setCheckoutCommandPath(sead::SafeStringBase<char> const&);
    save(sead::XmlDocument const&, agl::detail::FileIOMgr::DialogArg const&, unsigned int);
    showDialog(sead::hostio::FileInfo*, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&) const;
    checkout_(sead::SafeStringBase<char> const&) const;
    showErrorDialog_(sead::SafeStringBase<char> const&) const;
    save(void const*, unsigned int, agl::detail::FileIOMgr::DialogArg const&);
    load(agl::detail::FileIOMgr::DialogArg const&);
    close(int);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    sInstance;
};

} } 
