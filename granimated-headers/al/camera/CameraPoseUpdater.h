#pragma once

namespace al
{
	class CameraPoseUpdater
	{
	public:
	
	unsigned char _48[0x48];	// 48
	sead::Matrix34f matrix;		// 78
	sead::Vector3f pCameraPos;  // 84
	sead::Vector3f eyVector;    // 8C
	unsigned int _90;
	float _94;
	unsigned char _A8[0x14];
	float cameraNear;
	float cameraFar;
	float aspectRatio;
	float fovy;
	};
};