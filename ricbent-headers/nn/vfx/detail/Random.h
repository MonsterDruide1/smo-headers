#pragma once

namespace nn { namespace vfx { namespace detail { 

class Random
{
public:
    GetGlobalRandom();
    Random();
    Initialize();
    Finalize();
    SetSeed(unsigned int);
    g_GlobalSeed;
    g_Random;
    g_Vec3Table;
    g_NormalizedVec3Table;
    g_UseGlobalSeed;
};

} } } 
