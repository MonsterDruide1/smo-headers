#pragma once

namespace TimeBalloonFunction {

startNotifier(al::IUseSceneObjHolder const*);
endNotifier(al::IUseSceneObjHolder const*);
getPlayerBalloonState(TimeBalloon::BalloonState*, al::IUseSceneObjHolder const*, int);
getNoticeDataMax();
appearTimeBalloonTutorial(al::IUseSceneObjHolder const*);
closeTimeBalloonTutorial(al::IUseSceneObjHolder const*);

} 
