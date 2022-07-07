#pragma once

class HakoniwaStateSimpleDemo
{
public:
    HakoniwaStateSimpleDemo(HakoniwaSequence*, al::WipeHolder*, al::ScreenCaptureExecutor*, HakoniwaStateDeleteScene*);
    ~HakoniwaStateSimpleDemo();
    init();
    appear();
    setStageName(char const*);
    setWipeName(char const*);
    exeLoad();
    exeDemo();
    exeEnd();
};
