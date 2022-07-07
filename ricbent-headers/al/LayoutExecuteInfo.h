#pragma once

namespace al { 

class LayoutExecuteInfo
{
public:
    LayoutExecuteInfo();
    addUpdater(al::ExecutorListLayoutUpdate*);
    addDrawer(al::ExecutorListLayoutDrawBase*);
};

} 
