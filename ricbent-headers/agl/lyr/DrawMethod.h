#pragma once

namespace agl { namespace lyr { 

class DrawMethod
{
public:
    ~DrawMethod();
    compare(agl::lyr::DrawMethod const*, agl::lyr::DrawMethod const*);
    genMessage(sead::hostio::Context*);
};

} } 
