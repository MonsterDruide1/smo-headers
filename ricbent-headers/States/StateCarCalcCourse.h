#pragma once

class StateCarCalcCourse
{
public:
    StateCarCalcCourse(al::LiveActor*, CarInfo*);
    calcCurveDeg();
    tryRestartCurve();
    exeStraight();
    runCore(sead::Vector3<float>*, float);
    tryCurve(float);
    ~StateCarCalcCourse();
};
