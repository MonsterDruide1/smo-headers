#pragma once

namespace agl { namespace utl { 

class IParameterIO
{
public:
    callbackInvalidVersion_(agl::utl::ResParameterArchive);
    IParameterIO(sead::SafeStringBase<char> const&, unsigned int);
    IParameterIO();
    save(sead::SafeStringBase<char> const&, unsigned int) const;
    writeHeader_(sead::XmlElement*, sead::Heap*) const;
    save_(sead::SafeStringBase<char> const&, sead::XmlDocument const*) const;
    load(sead::SafeStringBase<char> const&, bool);
    loadText(void const*, unsigned int, bool);
    applyResParameterArchive(agl::utl::ResParameterArchive);
    applyResParameterArchiveLerp(agl::utl::ResParameterArchive, agl::utl::ResParameterArchive, float);
    genMessageIO(sead::hostio::Context*, unsigned int);
    isCompleteArchive(agl::utl::ResParameterArchive, bool) const;
    listenPropertyEventIO(sead::hostio::Reflexible*, sead::hostio::PropertyEvent const*);
    ~IParameterIO();
};

} } 
