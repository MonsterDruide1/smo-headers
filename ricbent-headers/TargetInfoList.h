#pragma once

class TargetInfoList
{
public:
    TargetInfoList();
    clear();
    append(al::LiveActor const*, al::LiveActor const*, int);
    remove(al::LiveActor const*);
    remove(int);
    isInclude(al::LiveActor const*) const;
    elapse();
    survive();
    sort();
};
