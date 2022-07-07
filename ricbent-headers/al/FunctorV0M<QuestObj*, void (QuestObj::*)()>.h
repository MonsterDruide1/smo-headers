#pragma once

namespace al { namespace FunctorV0M<QuestObj*, void (QuestObj::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
