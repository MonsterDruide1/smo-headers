#pragma once

class RootTask
{
public:
    RootTask(sead::TaskConstructArg const&);
    prepare();
    enter();
    calc();
    draw();
    ~RootTask();
};
