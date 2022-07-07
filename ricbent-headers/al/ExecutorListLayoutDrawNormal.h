#pragma once

namespace al { 

class ExecutorListLayoutDrawNormal
{
public:
    ExecutorListLayoutDrawNormal(char const*, int, al::ExecuteSystemInitInfo const&);
    startDraw() const;
    ~ExecutorListLayoutDrawNormal();
};

} 
