#pragma once

class GameConfigData
{
public:
    GameConfigData();
    init();
    isCameraReverseInputH() const;
    onCameraReverseInputH();
    offCameraReverseInputH();
    isCameraReverseInputV() const;
    onCameraReverseInputV();
    offCameraReverseInputV();
    getCameraStickSensitivityLevel() const;
    setCameraStickSensitivityLevel(int);
    isValidCameraGyro() const;
    validateCameraGyro();
    invalidateCameraGyro();
    getCameraGyroSensitivityLevel() const;
    setCameraGyroSensitivityLevel(int);
    isUseOpenListAdditionalButton() const;
    onUseOpenListAdditionalButton();
    offUseOpenListAdditionalButton();
    isValidPadRumble() const;
    validatePadRumble();
    invalidatePadRumble();
    getPadRumbleLevel() const;
    setPadRumbleLevel(int);
    write(al::ByamlWriter*);
    read(al::ByamlIter const&);
};
