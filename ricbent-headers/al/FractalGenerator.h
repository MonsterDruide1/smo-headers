#pragma once

namespace al { 

class FractalGenerator
{
public:
    FractalGenerator(unsigned int, float, float, float);
    setParam(unsigned int, float, float, float);
    calcFractal(float, float, bool);
    makeSmoothPerlinNoise(float, float);
    makePerlinNoise(float, float);
    calcMultiFractal(float, float, float, bool);
    makeRandom(int, int);
    makeSmoothRandom(int, int);
};

} 
