#pragma once

namespace sead { namespace HeapSafeStringBase<char> {

operator=(sead::SafeStringBase<char> const&);
~HeapSafeStringBase();
HeapSafeStringBase(sead::Heap*, sead::SafeStringBase<char> const&, int);

} } 
