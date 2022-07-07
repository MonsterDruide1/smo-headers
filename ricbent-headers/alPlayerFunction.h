#pragma once

namespace alPlayerFunction {

registerPlayer(al::LiveActor*, al::PadRumbleKeeper*);
isFullPlayerHolder(al::LiveActor*);
findPlayerHolderIndex(al::LiveActor const*);
findPlayerHolderIndex(al::HitSensor const*);
isPlayerActor(al::LiveActor const*);
isPlayerActor(al::HitSensor const*);

} 
