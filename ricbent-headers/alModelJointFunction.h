#pragma once

namespace alModelJointFunction {

setDirectJointMtx(al::ModelKeeper*, int, sead::Matrix34<float> const&);
calcMtx34JointMtxByIndexRaw(sead::Matrix34<float>*, al::ModelKeeper*, int);

} 
