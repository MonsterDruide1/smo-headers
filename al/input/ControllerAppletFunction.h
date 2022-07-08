#pragma once

#include "al/input/GamePadSystem.h"

class ControllerAppletFunction {
public:
    void connectControllerSinglePlay(al::GamePadSystem*);
    void connectControllerSeparatePlay(al::GamePadSystem*);
};
