#pragma once

namespace sead { namespace FixedSafeStringBase<char, 256> {

~FixedSafeStringBase();
operator=(sead::SafeStringBase<char> const&);

} } 
