#pragma once

class CyclicCoordinateDescentIk
{
public:
    CyclicCoordinateDescentIk(al::LiveActor*, char const*);
    CyclicCoordinateDescentIk(al::LiveActor*, int);
    createConnection(char const*, char const*);
    setLimitDegree(char const*, sead::Vector3<float> const&, sead::Vector3<float> const&, char const*);
    updateEffector(sead::Vector3<float> const&, float, char const*);
    findConnection(char const*) const;
    getConnectionMax() const;
    getConnectionNum() const;
    getEffectorName(int) const;
};
