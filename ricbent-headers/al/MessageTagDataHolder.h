#pragma once

namespace al { 

class MessageTagDataHolder
{
public:
    MessageTagDataHolder(int);
    registerMessageTagData(al::MessageTagDataBase*);
    replaceMessage(sead::BufferedSafeStringBase<char16_t>*, al::IUseMessageSystem const*, char16_t const*) const;
};

} 
