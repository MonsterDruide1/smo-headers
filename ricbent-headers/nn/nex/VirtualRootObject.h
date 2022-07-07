#pragma once

namespace nn { namespace nex { namespace VirtualRootObject {

operator new(unsigned long);
operator new(unsigned long, char const*, unsigned int);
operator new[](unsigned long);
operator new[](unsigned long, char const*, unsigned int);
operator delete(void*);
operator delete[](void*);
operator delete(void*, char const*, unsigned int);
operator delete[](void*, char const*, unsigned int);

} } } 
