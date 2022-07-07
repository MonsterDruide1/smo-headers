#pragma once

class FirstSequenceScene
{
public:
    FirstSequenceScene();
    ~FirstSequenceScene();
    init(al::SceneInitInfo const&);
    appear();
    control();
    drawMain() const;
    setNoWipe();
    exeWipe();
    exeSelectMode();
};
