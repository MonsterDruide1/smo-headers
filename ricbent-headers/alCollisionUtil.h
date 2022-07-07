#pragma once

namespace alCollisionUtil {

getCollisionPartsKeeper(al::IUseCollision const*);
isCollisionMoving(al::HitInfo const*);
getCollisionHitPos(al::HitInfo const*);
getCollisionHitNormal(al::HitInfo const*);
getCollisionMovingReaction(al::HitInfo const*);
getCollisionHitSensor(al::HitInfo const*);
getCollisionHitParts(al::HitInfo const*);
getCollisionHitActor(al::HitInfo const*);
checkStrikeSphere(al::IUseCollision const*, sead::Vector3<float> const&, float, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
checkStrikeSphereMovingReaction(al::IUseCollision const*, sead::Vector3<float> const&, float, sead::Vector3<float> const&, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
checkStrikeDisk(al::IUseCollision const*, sead::Vector3<float> const&, float, float, sead::Vector3<float> const&, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
checkStrikeArrow(al::IUseCollision const*, sead::Vector3<float> const&, sead::Vector3<float> const&, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
checkStrikeSphereForPlayer(al::IUseCollision const*, sead::Vector3<float> const&, float, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
getFirstPolyOnArrow(al::IUseCollision const*, al::ArrowHitInfo const**, sead::Vector3<float> const&, sead::Vector3<float> const&, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
getStrikeArrowInfo(al::IUseCollision const*, unsigned int);
getFirstPolyOnArrow(al::IUseCollision const*, sead::Vector3<float>*, al::Triangle*, sead::Vector3<float> const&, sead::Vector3<float> const&, char const*);
getFirstPolyOnArrow(al::IUseCollision const*, sead::Vector3<float>*, al::Triangle*, sead::Vector3<float> const&, sead::Vector3<float> const&, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
getHitPosOnArrow(al::IUseCollision const*, sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
getHitPosAndNormalOnArrow(al::IUseCollision const*, sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
getHitPosAndNormalAndSensorOnArrow(al::IUseCollision const*, sead::Vector3<float>*, sead::Vector3<float>*, al::HitSensor**, sead::Vector3<float> const&, sead::Vector3<float> const&, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
getFirstCollisionSensorOnArrow(al::IUseCollision const*, sead::Vector3<float>*, al::HitSensor**, sead::Vector3<float> const&, sead::Vector3<float> const&, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
getLastCollisionSensorOnArrow(al::IUseCollision const*, sead::Vector3<float>*, al::HitSensor**, sead::Vector3<float> const&, sead::Vector3<float> const&, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
getLastPolyOnArrow(al::IUseCollision const*, sead::Vector3<float>*, al::Triangle*, sead::Vector3<float> const&, sead::Vector3<float> const&, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
getLastPolyOnArrow(al::IUseCollision const*, al::ArrowHitInfo const**, sead::Vector3<float> const&, sead::Vector3<float> const&, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
getStrikeArrowCollisionParts(al::IUseCollision const*, sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
tryGetStrikeArrowCollisionSensor(al::IUseCollision const*, sead::Vector3<float> const&, sead::Vector3<float> const&, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
getStrikeArrowInfoNum(al::IUseCollision const*);
getStrikeSphereInfo(al::IUseCollision const*, unsigned int);
getStrikeSphereInfoNum(al::IUseCollision const*);
getStrikeSphereHitPos(al::IUseCollision const*, unsigned int);
getStrikeDiskInfo(al::IUseCollision const*, unsigned int);
getStrikeDiskInfoNum(al::IUseCollision const*);
getStrikeDiskHitPos(al::IUseCollision const*, unsigned int);
isInvalidParts(al::CollisionParts const&, al::CollisionCheckInfoBase const&);
isFarAway(al::CollisionParts const&, sead::Vector3<float> const&, float);
checkStrikeSphereMove(al::IUseCollision const*, alCollisionUtil::SphereMoveHitInfo*, int, sead::Vector3<float> const&, float, sead::Vector3<float> const&, al::CollisionPartsFilterBase const*, al::TriangleFilterBase const*);
searchCollisionParts(al::IUseCollision const*, sead::Vector3<float> const&, float, sead::IDelegate1<al::CollisionParts*>&, al::CollisionPartsFilterBase const*);
validateCollisionPartsPtrArray(al::IUseCollision const*, sead::PtrArray<al::CollisionParts>*);
invalidateCollisionPartsPtrArray(al::IUseCollision const*);
getCollisionPartsPtrArray(al::IUseCollision const*);

} 
