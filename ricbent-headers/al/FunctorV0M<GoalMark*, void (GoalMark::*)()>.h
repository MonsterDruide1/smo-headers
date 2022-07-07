#pragma once

namespace al { namespace FunctorV0M<GoalMark*, void (GoalMark::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
