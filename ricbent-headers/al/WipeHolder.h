#pragma once

namespace al { 

class WipeHolder
{
public:
    WipeHolder(int);
    registerWipe(char const*, al::WipeSimple*);
    startClose(char const*, int);
    findWipe(char const*) const;
    startCloseByInfo(char const*);
    findInfo(char const*) const;
    tryStartClose(char const*, int);
    tryStartCloseByInfo(char const*);
    startCloseEnd(char const*);
    startOpen(int);
    isExistInfo(char const*) const;
    tryFindInfo(char const*) const;
    getCloseTimeByInfo(char const*) const;
    isCloseEnd() const;
    isOpenEnd() const;
    isCloseWipe(char const*) const;
};

} 
