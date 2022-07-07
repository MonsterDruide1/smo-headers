#pragma once

namespace ShineChipWatcher {

getCompleteNum();
init(al::ActorInitInfo const&);
createShineChips(al::ActorInitInfo const&, char const*, char const*);
initAfterPlacement();
updateHints();
isInArea() const;
appear();
kill();
getCount() const;
isWatch(al::LiveActor const*) const;
updateCount();
tryStartAppearShine();
isAppearedShine() const;
addDemoActorWithChips();
exeWait();
exeStartAppearShine();
exeWaitAppearShine();
exeComplete();
exeDone();

} 
