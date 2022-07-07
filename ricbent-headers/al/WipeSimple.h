#pragma once

namespace al { 

class WipeSimple
{
public:
    WipeSimple(char const*, char const*, al::LayoutInitInfo const&, char const*);
    startClose(int);
    tryStartClose(int);
    startCloseEnd();
    startOpen(int);
    tryStartOpen(int);
    isCloseEnd() const;
    isOpenEnd() const;
    exeClose();
    exeCloseEnd();
    exeOpen();
    appear();
};

} 
