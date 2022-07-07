#include <string>
#include <cstring>
#include "gfx/seadColor.h"
#include "math/seadMatrix.h"
#include "sead/math/seadVector.h"
#include "sead/math/seadQuat.h"
#include "types.h"

#include "main.h"

sead::Matrix34f MatrixFromYawPitchRollTrans(sead::Vector3f euler, sead::Vector3f trans);
sead::Vector3f QuatToEuler(sead::Quatf quat);
float calcFadeoff(al::LiveActor const *actor, sead::Vector3f pos2);

#define RAD(deg) (deg * (M_PI / 180)) // converts Degrees to Radians
#define DEG(rad) (rad * (180 / M_PI)) // converts Radians to Degrees