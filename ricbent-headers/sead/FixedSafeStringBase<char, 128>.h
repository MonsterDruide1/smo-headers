#pragma once

namespace sead { namespace FixedSafeStringBase<char, 128> {

~FixedSafeStringBase();
operator=(sead::SafeStringBase<char> const&);

} } 
