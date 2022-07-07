#pragma once

namespace al { namespace FunctorV0M<NpcStateWait*, void (NpcStateWait::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
