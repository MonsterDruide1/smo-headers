#pragma once

class SceneStateSelectMode
{
public:
    SceneStateSelectMode(char const*, al::Scene*, al::LayoutInitInfo const&, FooterParts*, al::WindowConfirm*, al::WaveVibrationHolder*);
    appear();
    kill();
    exeAppear();
    updateCursorParts(bool);
    exeWait();
    updateCursorPartsTrans();
    exeDecide();
    exeDecideWait();
    exeDecideConfirm();
    exeEnd();
    ~SceneStateSelectMode();
    getMessageSystem() const;
};
