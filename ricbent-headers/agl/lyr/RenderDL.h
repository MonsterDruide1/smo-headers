#pragma once

namespace agl { namespace lyr { 

class RenderDL
{
public:
    RenderDL();
    ~RenderDL();
    copyToRenderDL(agl::lyr::RenderDL*) const;
    compare(agl::lyr::RenderDL const*, agl::lyr::RenderDL const*);
    dumpInfo() const;
};

} } 
