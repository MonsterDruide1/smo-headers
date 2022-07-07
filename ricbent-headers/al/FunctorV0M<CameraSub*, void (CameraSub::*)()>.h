#pragma once

namespace al { namespace FunctorV0M<CameraSub*, void (CameraSub::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
