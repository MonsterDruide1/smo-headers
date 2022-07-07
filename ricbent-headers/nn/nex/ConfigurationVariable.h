#pragma once

namespace nn { namespace nex { 

class ConfigurationVariable
{
public:
    GetName();
    ConfigurationVariable(char*, char*);
    InitVariables();
    SetName(char*);
    SetValue(char const*);
    ~ConfigurationVariable();
    GetSourceType();
    Read();
    ReadFromFile();
    ReadFromEnvironment();
    ReadFromRegistry();
    ReadFromDefaultValue();
    WriteToRegistry();
    SetValue(nn::nex::String);
    GetValue();
};

} } 
