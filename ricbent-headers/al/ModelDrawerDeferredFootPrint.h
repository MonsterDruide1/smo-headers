#pragma once

namespace al { 

class ModelDrawerDeferredFootPrint
{
public:
    ModelDrawerDeferredFootPrint(char const*);
    createTable();
    draw() const;
    ~ModelDrawerDeferredFootPrint();
};

} 
