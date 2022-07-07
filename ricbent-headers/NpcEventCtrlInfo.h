#pragma once

class NpcEventCtrlInfo
{
public:
    NpcEventCtrlInfo(NpcEventSceneInfo const&, NpcEventSceneConstData const&, EventFlowSceneExecuteCtrl*);
    isCloseTalk() const;
    popBalloonInfo(NpcEventBalloonInfo*);
    popTalkInfo(NpcEventTalkInfo*);
    requestShowBalloonMessage(NpcEventBalloonInfo const&);
    requestShowTalkMessage(al::EventFlowNode const*, NpcEventTalkInfo const&);
    requestCloseTalkMessage(al::LiveActor const*);
    requestCloseWipeFadeBlack(al::EventFlowNode*, int);
    requestOpenWipeFadeBlack(al::EventFlowNode*, int);
    setBalloonFilterOnlyMiniGame(al::LiveActor const*);
    resetBalloonFilter(al::LiveActor const*);
    startChoice(al::EventFlowNode const*, al::EventFlowChoiceInfo*);
    getChoiceMessageNum() const;
    getChoiceMessage(int) const;
    getChoiceCancelIndex() const;
    tryGetChoiceTalkMessage() const;
    endChoice(int);
    isEnableCancelChoice() const;
    getSceneObjName() const;
    ~NpcEventCtrlInfo();
};
