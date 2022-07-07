#pragma once

namespace agl { namespace utl { namespace Parameter<sead::FixedSafeString<32> > {

~Parameter();
getParameterType() const;
ptr() const;
ptr();
typePtr() const;
typePtr();
size() const;
calcBinarizeSize() const;
clone(sead::Heap*, agl::utl::IParameterObj*) const;
Parameter(sead::FixedSafeString<32> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, agl::utl::IParameterObj*);
Parameter(sead::FixedSafeString<32> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, agl::utl::IParameterObj*);

} } } 
