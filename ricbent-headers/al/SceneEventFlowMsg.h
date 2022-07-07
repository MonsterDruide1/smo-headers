#pragma once

namespace al { 

class SceneEventFlowMsg
{
public:
    SceneEventFlowMsg();
    requestCommand(char const*);
    isReceiveCommand(char const*) const;
};

} 
