#pragma once

#include <al/camera/CameraViewInfo.h>
#include <sead/gfx/seadProjection.h>

namespace al
{
	
	class alCameraPoserFunction
	{
	public:
		
	};
	
    class CameraPoser
	{
    public:
        CameraPoser(const char *);
		
		virtual void init();
		virtual void appear(al::CameraStartInfo const&);
		
		unsigned char _unk[0x3C];	 // 00 - 3C
		sead::Vector3f unkVector;	 // 3C - 48
		sead::Vector3f cameraPos;	 // 48 - 54
		sead::Vector3f unkRotate;	 // 54 - 60
		float fovy;					 // 60 - 64
		float _64;					 // 64 - 68
		float _68;					 // 68 - 6C
		unsigned int _6C;			 // 6C - 70
		unsigned int _70;			 // 70 - 74
		float _74;					 // 74 - 78
		sead::Vector3f unkVector2;   // 78 - 84
		float _84;					 // 84 - 88
		float _88;					 // 88 - 8C
		unsigned int _8C;			 // 8C - 90
		unsigned char _90[0x128];    // 90 - 1B8
		float unk; 					 // 1B8 - 1BC
		float unkSame;				 // 1BC - 1C0
		unsigned char _1C0[0x40];    // 1C0 - 200
		sead::Vector3f preCameraPos; // 200 - 20C
		
    };
};