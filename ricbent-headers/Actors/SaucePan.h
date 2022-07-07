#pragma once

class SaucePan
{
public:
    SaucePan(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeAnimReaction();
    exeInNoDemo();
    tryUpdateItems();
    exeReaction();
    exeReactionBubbleIn();
    exeAppearShineBubbleIn();
    calcInDemoEndPos(sead::Vector3<float>*) const;
    tryUpdateItem(SaucePanItemInfo*);
};
