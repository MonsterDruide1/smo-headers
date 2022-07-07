#pragma once

namespace al { namespace FunctorV0M<DemoPlayer*, void (DemoPlayer::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
