#pragma once

namespace alAnimFunction {

isAllAnimEnd(al::LiveActor const*, int);
getAllAnimFrame(al::LiveActor const*, int);
getAllAnimFrameMax(al::LiveActor const*, char const*, int);
getAllAnimFrameRate(al::LiveActor const*, int);
getAllAnimName(al::LiveActor const*);
checkPass(float, float, float, bool, float);
createAnimInfoTableIfNeed(al::AnimInfoTable const*, al::AnimInfoTable const*);

} 
