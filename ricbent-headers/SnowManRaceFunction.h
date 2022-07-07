#pragma once

namespace SnowManRaceFunction {

registerNpcToRaceWatcher(al::LiveActor*);
calcRaceProgress(al::LiveActor const*);
calcRaceProgressPlayer(al::LiveActor const*);
getLapNum(al::LiveActor const*);
getLapMax(al::LiveActor const*);
isWinGoal(al::LiveActor const*);
getRaceLoseCount(al::LiveActor const*);

} 
