#pragma once

namespace sead { namespace Random {

init();
init(unsigned int);
init(unsigned int, unsigned int, unsigned int, unsigned int);
getU32();
getU64();
getContext(unsigned int*, unsigned int*, unsigned int*, unsigned int*) const;

} } 
