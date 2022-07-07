#pragma once

namespace agl { namespace lyr { 

class RenderStep
{
public:
    RenderStep();
    calc();
    pushBack(agl::lyr::DrawMethod*);
    removeByObject(void const*);
    remove(agl::lyr::DrawMethod const*);
    clear();
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    listenNodeEvent(sead::hostio::NodeEvent const*);
    ~RenderStep();
};

} } 
