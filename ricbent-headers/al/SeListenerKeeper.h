#pragma once

namespace al { 

class SeListenerKeeper
{
public:
    SeListenerKeeper(int, sead::Vector3<float> const*, sead::Matrix34<float> const*, al::Projection const*, sead::Vector3<float> const*, char const*, float);
    setPlayerHolder(al::PlayerHolder const*);
    update();
    startListenerPoser(int, char const*, int);
    endListenerPoser(int, char const*, int);
    startListenerPoser(char const*, int);
    endListenerPoser(char const*, int);
    getListenerParam(int) const;
};

} 
