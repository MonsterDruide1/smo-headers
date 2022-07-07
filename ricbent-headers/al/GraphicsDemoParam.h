#pragma once

namespace al { 

class GraphicsDemoParam
{
public:
    GraphicsDemoParam();
    getParamName() const;
    getPresetName() const;
    getTriggerAnimName() const;
    getTriggerAnimFrame() const;
    getBaseAngle() const;
    getLerpStepIn() const;
    getLerpStepOut() const;
    getPriority() const;
    getSuffixName() const;
    getAdditionalCubeMapArchiveName() const;
    getCubeMapUnitName() const;
};

} 
