#pragma once

namespace nn { namespace nex { 

class RendezVousLoginOperation
{
public:
    RendezVousLoginOperation(nn::nex::BackEndServices&);
    ~RendezVousLoginOperation();
    GetType() const;
    GetClassNameString() const;
    ForceImplOperationCommonMethodsMacro();
};

} } 
