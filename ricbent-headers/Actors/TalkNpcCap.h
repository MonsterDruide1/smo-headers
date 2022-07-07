#pragma once

namespace TalkNpcCap {

tryCreate(al::LiveActor const*, al::ActorInitInfo const&);
initAttach(al::LiveActor const*);
createForAchievementNpc(al::LiveActor const*, al::ActorInitInfo const&);
createForHintNpc(al::LiveActor const*, al::ActorInitInfo const&);
createForShibaken(al::LiveActor const*, al::ActorInitInfo const&);
createForShoppingNpc(al::LiveActor const*, al::ActorInitInfo const&);
createForShoppingNpcChromakey(al::LiveActor const*, al::ActorInitInfo const&);
createForVolleyballNpc(al::LiveActor const*, al::ActorInitInfo const&);
makeActorAlive();
control();
init(al::ActorInitInfo const&);

} 
