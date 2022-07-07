#pragma once

class CapMessageShowInfo
{
public:
    CapMessageShowInfo();
    CapMessageShowInfo(char const*, char const*, int, int, bool, bool);
    set(char const*, char const*, int, int, bool, bool);
    setReplace(char const*, int);
    getDelayTime() const;
    getWaitTime() const;
    getMstxtName() const;
    getLabelName() const;
    isStageMessage() const;
    isContinueDemo() const;
    getReplaceTagName() const;
    getReplaceNumber() const;
};
