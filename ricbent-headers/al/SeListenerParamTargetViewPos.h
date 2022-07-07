#pragma once

namespace al { namespace SeListenerParamTargetViewPos {

getViewPos() const;
getViewMatrix() const;
getFovyDegree() const;
getTargetPos() const;
getPlayerPos() const;
setParam(sead::Vector3<float> const*, sead::Matrix34<float> const*, al::Projection const*, sead::Vector3<float> const*);
setPlayerHolder(al::PlayerHolder const*);

} } 
