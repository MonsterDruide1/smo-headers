#pragma once

namespace al
{
    float normalize(float, float, float);
    float normalize(signed int, signed int, signed int);

    float easeIn(float);
    float easeOut(float);
    float easeInOut(float);

    float sign(float);
    int sign(int);

    float squareIn(float);
    float squareOut(float);

    float powerIn(float, float);
    float powerOut(float, float);

    float lerpValue(float, float, float);
	
	// RANDOM
	float getRandom(void);
	float getRandom(float);
	float getRandom(float, float);
	int getRandom(int);
	int getRandom(int,int);
};