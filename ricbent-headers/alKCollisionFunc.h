#pragma once

namespace alKCollisionFunc {

calcSphereHitPos(sead::Vector3<float>*, al::KCollisionServer const*, sead::Vector3<float> const&, al::KCPrismData const&, al::KCPrismHeader const*, unsigned char);
projectToPlane(sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
calcDiskHitPos(sead::Vector3<float>*, al::KCollisionServer const*, sead::Vector3<float> const&, float, sead::Vector3<float> const&, al::KCPrismData const&, al::KCPrismHeader const*, unsigned char);

} 
