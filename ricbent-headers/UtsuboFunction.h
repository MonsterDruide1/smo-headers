#pragma once

namespace UtsuboFunction {

calcPlayerPosAfterMove(sead::Vector3<float>*, al::LiveActor const*, sead::Vector3<float> const&, UtsuboFunction::UtsuboAttackParam const&);
isInSerchRange(al::LiveActor const*, sead::Vector3<float> const&, bool, UtsuboFunction::UtsuboAttackParam const&);
isMove(al::AreaObjGroup const*);

} 
