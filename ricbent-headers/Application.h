#pragma once

class Application
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    init(int, char**);
    run();
    getRootTask() const;
    Application();
    sInstance;
};
