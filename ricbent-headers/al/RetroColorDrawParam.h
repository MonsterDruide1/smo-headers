#pragma once

namespace al { 

class RetroColorDrawParam
{
public:
    RetroColorDrawParam();
    isEnable() const;
    isCheckPaletteWithLuma() const;
    isPointSampling() const;
    isBaseColorMode() const;
    isDrawCRTDisplay() const;
    isDrawCRTPixelSelect() const;
    isDrawSTNDisplay() const;
    getColorPaletteId() const;
    getWidthScale() const;
    getHeightScale() const;
    getRedBit() const;
    getGreenBit() const;
    getBlueBit() const;
    getCRTDistortion() const;
    getCRTVignetRate() const;
    getCRTScanLineScale() const;
    getCRTScanLineColor() const;
    getCRTNoiseParam() const;
    getSTNLineScale() const;
    getSTNLineColor() const;
    getParamName() const;
    getParamObj();
    getParamObj() const;
};

} 
