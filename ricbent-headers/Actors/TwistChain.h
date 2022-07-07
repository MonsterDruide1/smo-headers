#pragma once

class TwistChain
{
public:
    TwistChain(char const*);
    init(al::ActorInitInfo const&);
    movement();
    calcAnim();
    setPose(sead::Quat<float> const&, sead::Vector3<float> const&, float);
    setPrevChain(TwistChain*);
    setNextChain(TwistChain*);
    addTwist(float, TwistChain const*);
    startBlow();
    startBlow(sead::Vector3<float> const&, sead::Vector3<float> const&);
    getPrevTwistDegree() const;
    getNextTwistDegree() const;
    setFix();
    setFree();
    exeFix();
    exeTwist();
    exeBlow();
    isTwist() const;
};
