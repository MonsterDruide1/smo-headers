#pragma once

class TextureReplaceScreen
{
public:
    TextureReplaceScreen(char const*);
    ~TextureReplaceScreen();
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    switchOn();
    switchOff();
    control();
    onClipped();
    draw() const;
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
};
