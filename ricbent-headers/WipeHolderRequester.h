#pragma once

class WipeHolderRequester
{
public:
    WipeHolderRequester();
    disableOpenWipeForSkipDemo();
    isDisableOpenWipeForSkipDemo() const;
    requestWipeClose(char const*);
    getRequestWipeCloseInfoName() const;
    requestWipeOpenImmidiate();
    tryReceiveRequestWipeOpenImmidiate();
    getSceneObjName() const;
    ~WipeHolderRequester();
};
