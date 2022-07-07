#pragma once

namespace CollisionShapeFunction {

isShapeName(CollisionShapeInfoBase const*, char const*);
isShapeArrow(CollisionShapeInfoBase const*);
isShapeSphere(CollisionShapeInfoBase const*);
isShapeDisk(CollisionShapeInfoBase const*);
getShapeInfoArrow(CollisionShapeInfoBase*);
getShapeInfoSphere(CollisionShapeInfoBase*);
getShapeInfoDisk(CollisionShapeInfoBase*);
getShapeInfoArrow(CollisionShapeInfoBase const*);
getShapeInfoSphere(CollisionShapeInfoBase const*);
getShapeInfoDisk(CollisionShapeInfoBase const*);
updateShapeOffset(CollisionShapeInfoBase*, sead::Vector3<float> const&);

} 
