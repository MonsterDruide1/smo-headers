#pragma once

namespace al { 

class YamlWriterToMemory
{
public:
    YamlWriterToMemory(unsigned char*, unsigned int);
    getUsedBufferSize() const;
    ~YamlWriterToMemory();
};

} 
