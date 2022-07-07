#pragma once

namespace agl { namespace proc { 

class LUT
{
public:
    LUT();
    LUT(sead::SafeStringBase<char> const&, agl::utl::IParameterObj*);
    LUT(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, agl::utl::IParameterObj*);
    ~LUT();
    generate(float*, int, agl::proc::LUT::GenerateArg const&) const;
    transform(float*, int, agl::proc::LUT::TransformArg const&) const;
    genMessageParameters(sead::hostio::Context*);
    listenPropertyEventParameters(sead::hostio::Reflexible*, sead::hostio::PropertyEvent const*);
};

} } 
