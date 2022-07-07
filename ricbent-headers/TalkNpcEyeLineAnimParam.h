#pragma once

class TalkNpcEyeLineAnimParam
{
public:
    TalkNpcEyeLineAnimParam();
    init(al::ByamlIter const&);
    getEyeMoveAnimName();
    getEyeResetAnimName();
};
