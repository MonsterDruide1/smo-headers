#pragma once

namespace al { 

class PadDataArcReader
{
public:
    PadDataArcReader(char const*);
    PadDataArcReader(char const*, char const*);
    readResource(char const*);
    checkEnd();
    read(al::PadDataPack*);
    isEnd() const;
    getCursorFrame() const;
    getRemainFrame() const;
};

} 
