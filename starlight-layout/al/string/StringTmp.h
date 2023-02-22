#pragma once

#include <sead/prim/seadSafeString.h>

namespace al {
    
    template<int T>
    class StringTmp : public sead::BufferedSafeStringBase<char>
    {
    public:
        inline StringTmp() : sead::BufferedSafeStringBase<char>(this->mTop, T)
        {
            assureTerminationImpl_();
        }
    };
}
