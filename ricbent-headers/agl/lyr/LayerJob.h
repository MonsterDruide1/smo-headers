#pragma once

namespace agl { namespace lyr { 

class LayerJob
{
public:
    LayerJob();
    ~LayerJob();
    initialize(agl::lyr::LayerJob::Type, agl::lyr::Layer const*, sead::Heap*);
    finalize();
    pushBackTo(agl::lyr::RenderDisplay const*, int, sead::PtrArray<agl::lyr::LayerJob>*);
    invoke();
    compare(agl::lyr::LayerJob const*, agl::lyr::LayerJob const*);
};

} } 
