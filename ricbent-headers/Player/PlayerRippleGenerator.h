#pragma once

class PlayerRippleGenerator
{
public:
    PlayerRippleGenerator(al::LiveActor const*, al::LiveActor const*, PlayerModelHolder const*);
    reset();
    tryDeleteReaction(bool, bool, bool);
    updateAndGenerate(bool, bool, bool, bool);
};
