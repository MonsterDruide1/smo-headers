#pragma once

namespace al { 

class GamePadSystem
{
public:
    GamePadSystem();
    changeSinglePlayMode();
    isDisconnectPlayable() const;
    getPadName(unsigned char) const;
    getPadPlayStyle(unsigned char) const;
    update();
    isDisconnectPlayableImpl() const;
    setDisconnectFrame(int);
    setInvalidateDisconnectFrame(int);
    setPadName(unsigned char, sead::SafeStringBase<char16_t> const&);
    changeMultiPlayMode(int, int);
};

} 
