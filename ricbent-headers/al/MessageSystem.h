#pragma once

namespace al { 

class MessageSystem
{
public:
    tryInitMessageHolder(sead::StrTreeMap<256, al::MessageHolder*>*, char const*, char const*, char const*);
    initMessageForChangeLanguage();
    MessageSystem();
    getMessageProject() const;
    getSystemMessageHolder(char const*) const;
    getMessageHolderCore(char const*, int) const;
    getSystemMessageHolder(char const*, char const*) const;
    getMessageHolderCore(char const*, int, char const*) const;
    getLayoutMessageHolder(char const*) const;
    getStageMessageHolder(char const*) const;
};

} 
