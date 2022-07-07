#pragma once

namespace agl { namespace perf { 

class GPUTimeStamp
{
public:
    GPUTimeStamp();
    startTop(agl::DrawContext*);
    startBottom(agl::DrawContext*);
    get() const;
};

} } 
