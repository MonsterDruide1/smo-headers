#pragma once

namespace sead { namespace Geometry {

calcSquaredDistancePointToLine(sead::Vector2<float> const&, sead::Line<sead::Vector2<float> > const&, float*);
calcSquaredDistancePointToLine(sead::Vector3<float> const&, sead::Line<sead::Vector3<float> > const&, float*);
calcSquaredDistancePointToRay(sead::Vector2<float> const&, sead::Ray<sead::Vector2<float> > const&, float*);
calcSquaredDistancePointToRay(sead::Vector3<float> const&, sead::Ray<sead::Vector3<float> > const&, float*);
calcSquaredDistancePointToSegment(sead::Vector2<float> const&, sead::Segment<sead::Vector2<float> > const&, float*);
calcSquaredDistancePointToSegment(sead::Vector3<float> const&, sead::Segment<sead::Vector3<float> > const&, float*);
calcSquaredDistancePointToPlane(sead::Vector2<float> const&, sead::Plane2<float> const&);
calcSquaredDistancePointToPlane(sead::Vector3<float> const&, sead::Plane3<float> const&);
calcSquaredDistanceSphereToPlane(sead::Sphere<sead::Vector2<float> > const&, sead::Plane2<float> const&);
calcSquaredDistanceSphereToPlane(sead::Sphere<sead::Vector3<float> > const&, sead::Plane3<float> const&);
calcSquaredDistancePointToAABB(sead::Vector2<float> const&, sead::BoundBox2<float> const&, sead::Vector2<float>*);
calcSquaredDistancePointToAABB(sead::Vector3<float> const&, sead::BoundBox3<float> const&, sead::Vector3<float>*);
calcSquaredDistanceLineToLine(sead::Line<sead::Vector2<float> > const&, sead::Line<sead::Vector2<float> > const&, float*, float*);
calcSquaredDistanceLineToLine(sead::Line<sead::Vector3<float> > const&, sead::Line<sead::Vector3<float> > const&, float*, float*);
calcSquaredDistanceRayToRay(sead::Ray<sead::Vector2<float> > const&, sead::Ray<sead::Vector2<float> > const&, float*, float*);
calcSquaredDistanceRayToRay(sead::Ray<sead::Vector3<float> > const&, sead::Ray<sead::Vector3<float> > const&, float*, float*);
calcSquaredDistanceSegmentToSegment(sead::Segment<sead::Vector2<float> > const&, sead::Segment<sead::Vector2<float> > const&, float*, float*);
calcSquaredDistanceSegmentToSegment(sead::Segment<sead::Vector3<float> > const&, sead::Segment<sead::Vector3<float> > const&, float*, float*);
calcSquaredDistanceLineToSegment(sead::Line<sead::Vector2<float> > const&, sead::Segment<sead::Vector2<float> > const&, float*, float*);
calcSquaredDistanceLineToSegment(sead::Line<sead::Vector3<float> > const&, sead::Segment<sead::Vector3<float> > const&, float*, float*);
calcSquaredDistanceRayToSegment(sead::Ray<sead::Vector2<float> > const&, sead::Segment<sead::Vector2<float> > const&, float*, float*);
calcSquaredDistanceRayToSegment(sead::Ray<sead::Vector3<float> > const&, sead::Segment<sead::Vector3<float> > const&, float*, float*);
calcIntersectionLineToPlane(sead::Line<sead::Vector2<float> > const&, sead::Plane2<float> const&, float*);
calcIntersectionLineToPlane(sead::Line<sead::Vector3<float> > const&, sead::Plane3<float> const&, float*);
calcIntersectionRayToPlane(sead::Ray<sead::Vector2<float> > const&, sead::Plane2<float> const&, float*);
calcIntersectionRayToPlane(sead::Ray<sead::Vector3<float> > const&, sead::Plane3<float> const&, float*);
calcIntersectionSegmentToPlane(sead::Segment<sead::Vector2<float> > const&, sead::Plane2<float> const&, float*);
calcIntersectionSegmentToPlane(sead::Segment<sead::Vector3<float> > const&, sead::Plane3<float> const&, float*);
calcIntersectionLineToSphere(sead::Line<sead::Vector2<float> > const&, sead::Sphere<sead::Vector2<float> > const&, float*, float*);
calcIntersectionLineToSphere(sead::Line<sead::Vector3<float> > const&, sead::Sphere<sead::Vector3<float> > const&, float*, float*);
calcIntersectionRayToSphere(sead::Ray<sead::Vector2<float> > const&, sead::Sphere<sead::Vector2<float> > const&, float*, float*);
calcIntersectionRayToSphere(sead::Ray<sead::Vector3<float> > const&, sead::Sphere<sead::Vector3<float> > const&, float*, float*);
calcIntersectionSegmentToSphere(sead::Segment<sead::Vector2<float> > const&, sead::Sphere<sead::Vector2<float> > const&, float*, float*);
calcIntersectionSegmentToSphere(sead::Segment<sead::Vector3<float> > const&, sead::Sphere<sead::Vector3<float> > const&, float*, float*);
calcIntersectionLineToAABB(sead::Line<sead::Vector2<float> > const&, sead::BoundBox2<float> const&, float*, float*);
calcIntersectionLineToAABB(sead::Line<sead::Vector3<float> > const&, sead::BoundBox3<float> const&, float*, float*);
calcIntersectionRayToAABB(sead::Ray<sead::Vector2<float> > const&, sead::BoundBox2<float> const&, float*, float*);
calcIntersectionRayToAABB(sead::Ray<sead::Vector3<float> > const&, sead::BoundBox3<float> const&, float*, float*);
calcIntersectionSegmentToAABB(sead::Segment<sead::Vector2<float> > const&, sead::BoundBox2<float> const&, float*, float*);
calcIntersectionSegmentToAABB(sead::Segment<sead::Vector3<float> > const&, sead::BoundBox3<float> const&, float*, float*);
calcIntersectionSphereToAABB(sead::Sphere<sead::Vector2<float> > const&, sead::BoundBox2<float> const&);
calcIntersectionSphereToAABB(sead::Sphere<sead::Vector3<float> > const&, sead::BoundBox3<float> const&);
calcIntersectionSphereToSphere(sead::Sphere<sead::Vector2<float> > const&, sead::Sphere<sead::Vector2<float> > const&);
calcIntersectionSphereToSphere(sead::Sphere<sead::Vector3<float> > const&, sead::Sphere<sead::Vector3<float> > const&);
calcIntersectionPlaneToAABB(sead::Plane2<float> const&, sead::BoundBox2<float> const&);
calcIntersectionPlaneToAABB(sead::Plane3<float> const&, sead::BoundBox3<float> const&);
calcIntersectionCapsuleToCapsule(sead::Capsule<sead::Vector2<float> > const&, sead::Capsule<sead::Vector2<float> > const&);
calcIntersectionCapsuleToCapsule(sead::Capsule<sead::Vector3<float> > const&, sead::Capsule<sead::Vector3<float> > const&);
calcIntersectionLineToCapsule(sead::Line<sead::Vector2<float> > const&, sead::Capsule<sead::Vector2<float> > const&);
calcIntersectionLineToCapsule(sead::Line<sead::Vector3<float> > const&, sead::Capsule<sead::Vector3<float> > const&);
calcIntersectionRayToCapsule(sead::Ray<sead::Vector2<float> > const&, sead::Capsule<sead::Vector2<float> > const&);
calcIntersectionRayToCapsule(sead::Ray<sead::Vector3<float> > const&, sead::Capsule<sead::Vector3<float> > const&);
calcIntersectionSegmentToCapsule(sead::Segment<sead::Vector2<float> > const&, sead::Capsule<sead::Vector2<float> > const&);
calcIntersectionSegmentToCapsule(sead::Segment<sead::Vector3<float> > const&, sead::Capsule<sead::Vector3<float> > const&);
calcIntersectionPlaneToCapsule(sead::Plane2<float> const&, sead::Capsule<sead::Vector2<float> > const&);
calcIntersectionPlaneToCapsule(sead::Plane3<float> const&, sead::Capsule<sead::Vector3<float> > const&);

} } 
