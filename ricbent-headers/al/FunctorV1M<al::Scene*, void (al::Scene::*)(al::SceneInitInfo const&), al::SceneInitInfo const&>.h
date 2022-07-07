#pragma once

namespace al { namespace FunctorV1M<al::Scene*, void (al::Scene::*)(al::SceneInitInfo const&), al::SceneInitInfo const&> {

operator()() const;
clone() const;
~FunctorV1M();

} } 
