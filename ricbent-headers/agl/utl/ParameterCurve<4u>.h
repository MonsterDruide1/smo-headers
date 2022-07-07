#pragma once

namespace agl { namespace utl { namespace ParameterCurve<4u> {

~ParameterCurve();
copy(agl::utl::ParameterBase const&);
copyUnsafe(agl::utl::ParameterBase const&);
writeToXML(sead::XmlElement*, sead::Heap*) const;
readFromXML(sead::XmlElement const&, bool);
getParameterType() const;
ptr() const;
ptr();
typePtr() const;
typePtr();
size() const;
clone(sead::Heap*, agl::utl::IParameterObj*) const;
postApplyResource_(void const*, unsigned long);
ParameterCurve(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, agl::utl::IParameterObj*);

} } } 
