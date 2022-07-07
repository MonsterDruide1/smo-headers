#pragma once

namespace al { 

class AtmosScatterDrawer
{
public:
    AtmosScatterDrawer(al::ExecuteDirector*, al::GraphicsSystemInfo*);
    draw() const;
    execute();
    ~AtmosScatterDrawer();
};

} 
