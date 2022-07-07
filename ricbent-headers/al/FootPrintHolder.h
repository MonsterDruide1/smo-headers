#pragma once

namespace al { 

class FootPrintHolder
{
public:
    FootPrintHolder(al::LiveActor*, char const*, al::HitSensor*, al::FootPrintServer*);
    createActionList();
    clearAllFootPrint();
    update();
    appearFootPrint(sead::Vector3<float> const&);
    findDeadFootPrint();
    findDeadFootPrintByForce();
    getCharacterName() const;
    getMetamorphosisName() const;
    createTimingList(al::FootPrintHolder::Action*, al::ByamlIter*);
    calcMaxAppearNum() const;
};

} 
