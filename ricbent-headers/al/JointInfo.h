#pragma once

namespace al { 

class JointInfo
{
public:
    JointInfo();
    JointInfo(char const*);
    update(al::LiveActor const*);
};

} 
