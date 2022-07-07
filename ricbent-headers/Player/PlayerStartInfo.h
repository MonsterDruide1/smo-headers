#pragma once

class PlayerStartInfo
{
public:
    PlayerStartInfo(al::PlacementInfo const*, al::CameraTicket*, char const*, PlayerStartObj*, sead::Vector3<float> const*, sead::Quat<float> const*);
    isEqualStartId(char const*) const;
    isEqualPlacementIdString(char const*) const;
};
