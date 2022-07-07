#pragma once

namespace nn { namespace nex { 

class Configuration
{
public:
    Configuration();
    ~Configuration();
    CreateVariable(nn::nex::ConfigurationVariable*);
    FindVariable(char*);
    GetVariablesNumber();
    GetVariable(unsigned int);
};

} } 
