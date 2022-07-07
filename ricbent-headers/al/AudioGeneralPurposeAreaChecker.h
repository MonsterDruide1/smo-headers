#pragma once

namespace al { 

class AudioGeneralPurposeAreaChecker
{
public:
    AudioGeneralPurposeAreaChecker(char const*);
    init(al::AreaObjDirector*);
    reset();
    update();
    tryFindAreaObjPlayerOne(al::AreaObj**) const;
    isInArea() const;
    isInvaridByOneTime() const;
    setPlayerHolder(al::PlayerHolder const*);
    getIntArgInCurArea(char const*) const;
    getFloatArgInCurArea(char const*) const;
    getBoolArgInCurArea(char const*) const;
    getStringArgInCurArea(char const*) const;
    getStringArgInCurAreaWithAreaCheck(char const*) const;
    getIntArgInPastArea(char const*) const;
    getStringArgInPastArea(char const*) const;
    tryGetIntArgInCurArea(int*, char const*) const;
    tryGetStringArgInCurArea(char const**, char const*) const;
    getAreaObjDirector() const;
};

} 
