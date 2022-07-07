#pragma once

namespace al { 

class SklAnimRetargettingInfo
{
public:
    SklAnimRetargettingInfo(nn::g3d::ModelObj const*, nn::g3d::ModelObj const*, sead::Vector3<float> const&);
    SklAnimRetargettingInfo(nn::g3d::ResSkeleton const*, nn::g3d::ResSkeleton const*, sead::Vector3<float> const&);
    SklAnimRetargettingInfo(nn::g3d::ResSkeleton const*, al::ByamlIter const&, char const*, sead::Vector3<float> const&);
    SklAnimRetargettingInfo(al::ByamlIter const&, char const*, char const*, sead::Vector3<float> const&);
};

} 
