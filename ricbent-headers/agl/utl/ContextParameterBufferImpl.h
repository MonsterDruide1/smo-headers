#pragma once

namespace agl { namespace utl { 

class ContextParameterBufferImpl
{
public:
    preCopyParameter(int, agl::utl::IParameterObj const*, agl::utl::IParameterObj const*, float);
    postCopyParameter(int, agl::utl::IParameterObj const*, agl::utl::IParameterObj const*, float);
    ContextParameterBufferImpl();
    ~ContextParameterBufferImpl();
    initialize(int, bool, sead::Heap*);
    copyParameterToAllContext(int);
    copyParameterByIndex(int, int);
    copyParameter(int, agl::utl::IParameterObj const&);
    copyParameterLerp(int, agl::utl::IParameterObj const&, agl::utl::IParameterObj const&, float);
};

} } 
