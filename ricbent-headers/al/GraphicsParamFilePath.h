#pragma once

namespace al { 

class GraphicsParamFilePath
{
public:
    GraphicsParamFilePath(char const*, char const*);
    makeBinaryPath(al::StringTmp<256>*) const;
};

} 
