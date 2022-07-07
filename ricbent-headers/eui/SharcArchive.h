#pragma once

namespace eui { 

class SharcArchive
{
public:
    SharcArchive();
    ~SharcArchive();
    finalize();
    initialize(sead::Heap*, void*, unsigned int);
    startFileReader(eui::SharcArchive::FileReader*) const;
};

} 
