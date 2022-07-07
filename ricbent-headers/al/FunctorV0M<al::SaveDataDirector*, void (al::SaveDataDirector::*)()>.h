#pragma once

namespace al { namespace FunctorV0M<al::SaveDataDirector*, void (al::SaveDataDirector::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
