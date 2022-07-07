#pragma once

class WorldTravelingPeachWaitState
{
public:
    WorldTravelingPeachWaitState(al::LiveActor*, Tiara*, TalkNpcParam const*, TalkNpcActionAnimInfo const*);
    appear();
    kill();
    startPeachWorldHomeCastleCapDemo();
    endPeachWorldHomeCastleCapDemo();
    exeWait();
    exeTurnToTiara();
    exeAdlibTalk();
    exeTurnToBack();
    exeFindTurn();
    exeShakeHand();
    exeTurnToPlayer();
    exeWaitInitPeachWorldHomeCastleCapDemo();
    exeShakeHandPeachWorldHomeCastleCapDemo();
    exeWaitAfterPeachWorldHomeCastleCapDemo();
};
