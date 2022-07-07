#pragma once

class CityWorldSign
{
public:
    CityWorldSign(char const*);
    init(al::ActorInitInfo const&);
    control();
    controlForDance();
    setLightAnim(CityWorldSign::LightAnim);
    setTexturePattern(CityWorldSign::TexturePattern);
    changeActionByBgmAnim(int, int);
    setAnimWaitA(CityWorldSign::AnimationPatterns);
    setAnimWaitB(CityWorldSign::AnimationPatterns);
    setAnimMoveAToB(CityWorldSign::AnimationPatterns);
    setAnimMoveBToA(CityWorldSign::AnimationPatterns);
    exeMoveAtoB();
    exeWaitB();
    exeMoveBtoA();
    exeWaitA();
};
