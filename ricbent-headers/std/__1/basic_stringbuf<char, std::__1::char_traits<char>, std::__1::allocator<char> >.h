#pragma once

namespace std { namespace __1 { namespace basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > {

~basic_stringbuf();
seekoff(long long, std::__1::ios_base::seekdir, unsigned int);
seekpos(std::__1::fpos<__mbstate_t>, unsigned int);
underflow();
pbackfail(int);
overflow(int);
str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&);
str() const;

} } } 
