#pragma once

namespace al { 

class MessageProjectEx
{
public:
    MessageProjectEx();
    init();
    finalize();
    getTagGroupNameByIndex(int) const;
    getTagNameByIndex(int, int) const;
    getTagParamNameByIndex(int, int, int) const;
    getTagGroupNum() const;
    getTagNum(int) const;
    getTagParamNum(int, int) const;
    ~MessageProjectEx();
};

} 
