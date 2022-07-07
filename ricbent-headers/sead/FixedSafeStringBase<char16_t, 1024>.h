#pragma once

namespace sead { namespace FixedSafeStringBase<char16_t, 1024> {

~FixedSafeStringBase();
operator=(sead::SafeStringBase<char16_t> const&);

} } 
