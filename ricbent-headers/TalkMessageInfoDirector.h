#pragma once

class TalkMessageInfoDirector
{
public:
    TalkMessageInfoDirector();
    init(al::ActorInitInfo const&, al::SceneObjHolder*);
    execute();
    findInAreaTalkMessageInfoIdx() const;
    isActiveCapMessage(char const*) const;
    isDelayCapMessage(char const*) const;
    endForce();
    exeWatch();
    setNerveMessage();
    exeDelay();
    getInfoParam() const;
    changeTalkMessageIdx();
    exeAppear();
    exeFollowText();
    exeWait();
    calcWaitFrame(TalkMessageInfoMessageParam const*, int) const;
    exeDisappear();
    exeEndForce();
    tryGetInfoParam() const;
    updateEndForceCommon();
    exeAppearMessage();
    exeAppearMessageLow();
    exeAppearMessageDemo();
    exeAppearMessageBoss();
    exeAppearMessageMinigame();
    exeAppearMessageMoon();
    exeAppearWaitEndMessage();
    registerTalkMessageInfoParam(TalkMessageInfoParam*);
    tryCreateCapMessageList(al::StageInfo const*, al::ActorInitInfo const&);
    startPlayCapMessage();
    endPlayCapMessage();
    startMessageContinue(char const*);
    setNerveAppearWaitEndSystemMessage(char const*, char const*);
    endMessageContinue();
    trySetNerveAppearMessageLow(char const*, char const*, int, int);
    setNerveAppearMessageCommon(char const*, char const*, int, int, al::Nerve const*, bool);
    trySetNerveAppearMessageMoon();
    setNerveAppearMessageMoon(char const*, char const*);
    setNerveAppearMessage(char const*, char const*, int, int, bool, bool);
    setNerveAppearMessageBoss(char const*, char const*, int, int, bool);
    setNerveAppearMessageMinigame(char const*, char const*, int, int);
    setNerveAppearMessageMoonLowText(char16_t const*, char const*);
    setNerveAppearMessageMoonNum(char const*, char const*, int);
    getNerveKeeper() const;
    getSceneObjHolder() const;
    getAudioKeeper() const;
    ~TalkMessageInfoDirector();
};
