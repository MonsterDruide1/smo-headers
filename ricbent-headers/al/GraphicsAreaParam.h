#pragma once

namespace al { 

class GraphicsAreaParam
{
public:
    GraphicsAreaParam();
    getAreaName() const;
    getSuffixName() const;
    getPresetName() const;
    getLerpStepIn() const;
    getLerpStepOut() const;
    getBaseAngle() const;
    getAdditionalCubeMapArchiveName() const;
    getAdditionalCubeMapUnitName() const;
    getCubeMapUnitName() const;
    getPriority() const;
    copyParam(al::GraphicsAreaParam*);
};

} 
