#pragma once

namespace nn { namespace nex { 

class RendezVousLogoutOperation
{
public:
    RendezVousLogoutOperation(nn::nex::BackEndServices&);
    ~RendezVousLogoutOperation();
    GetType() const;
    GetClassNameString() const;
    ForceImplOperationCommonMethodsMacro();
};

} } 
