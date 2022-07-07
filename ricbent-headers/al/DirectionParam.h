#pragma once

namespace al { namespace DirectionParam {

initByArg(al::ActorInitInfo const&);
syncToDirection();
initializeDir(agl::utl::ParameterObj*, char const*, char const*);
initializeDir(sead::Vector3<float> const&, agl::utl::ParameterObj*, char const*, char const*);
syncFromDirection(sead::Vector3<float> const&);
initializeDir(al::ParameterObj*, char const*, char const*);
initializeDir(sead::Vector3<float> const&, al::ParameterObj*, char const*, char const*);
getLongitudeRadian() const;
getLatitudeRadian() const;
getLongitudeRadianPtr();
getLatitudeRadianPtr();
setLongitudeRadian(float);
setLatitudeRadian(float);
syncFromDirection();
syncFromRPYDegree(sead::Vector3<float> const&);
lerp(al::DirectionParam const&, al::DirectionParam const&, float);

} } 
