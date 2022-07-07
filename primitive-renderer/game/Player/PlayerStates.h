#pragma once

class PlayerStateRolling {
    public:
        bool isRolling() const;
};

class PlayerStateJump {
    public:
        bool isFormSquat2D() const;
};

class PlayerStateDamageLife {
    public:
        bool isFormSquat() const;
};

class PlayerStateWallCatch {
    public:
        bool isWallCatchForm() const;
};

class PlayerStateGrabCeil {
    public:
        bool isFormGrabCeil() const;
};

class PlayerStatePoleClimb {
    public:
        bool isFormPoleClimb() const;
};