#pragma once

namespace al { namespace FunctorV0M<TalkMessageInfoParam*, void (TalkMessageInfoParam::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
