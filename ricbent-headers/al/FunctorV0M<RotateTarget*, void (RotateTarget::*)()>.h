#pragma once

namespace al { namespace FunctorV0M<RotateTarget*, void (RotateTarget::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
