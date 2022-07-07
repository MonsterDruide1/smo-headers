#pragma once

namespace agl { namespace detail { namespace SeadUtil {

getNearFarAspectFovy(sead::Projection const&, float*, float*, float*, float*, sead::Vector2<float>*);
setNearFarAspectFovy(sead::Projection*, float, float, float, float, sead::Vector2<float> const&, bool);

} } } 
