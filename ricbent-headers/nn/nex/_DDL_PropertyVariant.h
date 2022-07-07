#pragma once

namespace nn { namespace nex { 

class _DDL_PropertyVariant
{
public:
    operator=(nn::nex::_DDL_PropertyVariant const&);
    operator==(nn::nex::_DDL_PropertyVariant const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_PropertyVariant const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_PropertyVariant*);
    ~_DDL_PropertyVariant();
};

} } 
