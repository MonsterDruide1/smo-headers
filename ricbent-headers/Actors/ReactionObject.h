#pragma once

class ReactionObject
{
public:
    ReactionObject(char const*);
    init(al::ActorInitInfo const&);
    initReactionObject(al::ActorInitInfo const&, char const*);
    startSwitchOn();
    initAfterPlacement();
    isExistItem() const;
    control();
    movement();
    calcAnim();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    exeWait();
    exeEnd();
    exeBlow();
    appearItem(al::HitSensor*);
    exeReaction();
    isReaction() const;
    isNerveWait() const;
};
