#pragma once

namespace al { 

class PrePassLightBase
{
public:
    getCollisionDirector() const;
    PrePassLightBase(char const*, al::ParameterObj*);
    init(al::ActorInitInfo const&);
    appear();
    requestAppearByUser(int);
    setAppearFrame(int);
    requestKillByUser(int);
    requestKillCore(int);
    requestKill();
    requestKillDirect();
    setKillFrame(int);
    getColor() const;
    requestUserColor(sead::Color4f const&);
    getOriginalColor() const;
    setOffset(sead::Vector3<float> const&);
    getName() const;
    setEnableSpecular(bool);
    getOffset() const;
    getRotOffsetDegree() const;
    calcColor(sead::Color4f*, float) const;
    calcConnectorInfo(sead::Vector3<float>*, sead::Quat<float>*, sead::Vector3<float>*) const;
    resetRequest();
    exeAppear();
    exeWait();
    exeKill();
    exeDead();
    calcRandomRate() const;
    ~PrePassLightBase();
    trySetupShadow(int, agl::lght::LightPrePass*, al::ShadowDirector*);
};

} 
