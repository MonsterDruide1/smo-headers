#pragma once

namespace nn { namespace nex { 

class qResult
{
public:
    GetFacility() const;
    qResult();
    qResult(int const&);
    qResult(int const&, char const*, int const&);
    qResult(bool const&);
    Equals(int const&) const;
    Equals(bool const&) const;
    operator bool() const;
    operator=(bool const&);
    operator=(unsigned int const&);
    operator=(int const&);
    operator=(nn::nex::qResult const&);
    GetNnResult() const;
    GetErrorCodeStruct() const;
    Format(nn::nex::String*) const;
    GetReturnCodeString() const;
    GetErrorName() const;
    IsError() const;
    IsWarning() const;
    IsReinitializeRequired() const;
    IsResetRequired() const;
    IsProgrammingError() const;
};

} } 
