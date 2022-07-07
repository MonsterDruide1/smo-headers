#pragma once

namespace al { 

class ByamlWriterData
{
public:
    printIndent(int) const;
    makeIndex();
    calcPackSize() const;
    getTypeCode() const;
    isContainer() const;
    print(int) const;
    ~ByamlWriterData();
};

} 
