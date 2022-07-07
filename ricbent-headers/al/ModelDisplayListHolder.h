#pragma once

namespace al { 

class ModelDisplayListHolder
{
public:
    ModelDisplayListHolder(unsigned int, unsigned int);
    pushDisplayListModel(agl::DisplayList*);
    pushDisplayListShape(agl::DisplayList*, int);
    invalidateDisplayListAll();
    invalidateDisplayListModel();
    invalidateDisplayListShape(int);
};

} 
