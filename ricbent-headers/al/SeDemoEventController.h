#pragma once

namespace al { 

class SeDemoEventController
{
public:
    SeDemoEventController(al::AudioDirector*);
    startEvent(al::AudioInfoListWithParts<al::SeDemoProcInfo>*);
    endEvent(al::AudioInfoListWithParts<al::SeDemoProcInfo>*, bool);
    procDemoEvent(al::SeDemoProcInfo const*);
    update(int);
};

} 
