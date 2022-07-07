#pragma once

namespace agl { namespace fx { namespace OfxLensFlare { namespace Preset { 

class PresetElement
{
public:
    PresetElement(int, agl::utl::IParameterObj*);
    copy(agl::fx::OfxLensFlare::Preset::PresetElement const&);
};

} } } } 
