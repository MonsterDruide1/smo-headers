#pragma once

namespace al { namespace FunctorV0M<TalkNpc*, void (TalkNpc::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
