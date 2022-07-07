#pragma once

namespace nn { namespace nex { 

class DataStoreDataCode
{
public:
    CreateFromDataId(nn::nex::String const&, unsigned long);
    CreateFromDataCodeString(nn::nex::String const&, nn::nex::String const&);
    CreateFromDataCodeRaw(nn::nex::String const&, unsigned long);
    DataStoreDataCode();
    GetDataId();
    ToDataCodeString();
    ToDataCodeStringZeroPad();
};

} } 
