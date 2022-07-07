#pragma once

namespace nn { namespace nex { 

class _DDL_BufferQueueParam
{
public:
    ~_DDL_BufferQueueParam();
    operator=(nn::nex::_DDL_BufferQueueParam const&);
    operator==(nn::nex::_DDL_BufferQueueParam const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_BufferQueueParam const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_BufferQueueParam*);
};

} } 
