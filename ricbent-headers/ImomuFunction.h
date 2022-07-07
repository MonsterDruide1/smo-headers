#pragma once

namespace ImomuFunction {

calcExpandLength(ImomuPartsController*);
expandCommon(al::LiveActor*, ImomuInfo const*, float, bool);
shrinkCommon(al::LiveActor*, ImomuInfo const*);
endShrinkCommon(al::LiveActor*, ImomuInfo*);
sendMsgPushAndKillVelocityToTargetImomu(al::LiveActor*, sead::Vector3<float>*, al::HitSensor*, al::HitSensor*);
invalidateSpineSensors(al::LiveActor*);
validateSpineSensors(al::LiveActor*);
validateDepthShadowMapImomu(al::LiveActor*);
updateDepthShadowMapImomu(al::LiveActor*);
invalidateDepthShadowMapImomu(al::LiveActor*);
setVelocityZeroH(al::LiveActor*);

} 
