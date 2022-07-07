#pragma once

namespace al { namespace FunctorV0M<StageScene*, void (StageScene::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
