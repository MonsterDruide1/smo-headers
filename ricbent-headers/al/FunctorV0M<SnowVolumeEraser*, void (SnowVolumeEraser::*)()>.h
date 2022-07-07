#pragma once

namespace al { namespace FunctorV0M<SnowVolumeEraser*, void (SnowVolumeEraser::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
