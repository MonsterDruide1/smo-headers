#pragma once

class MoonRockData
{
public:
    MoonRockData(int);
    isEnableShowDemoOpenMoonRockFirst() const;
    isEnableShowDemoOpenMoonRockWorld(int) const;
    showDemoOpenMoonRockFirst();
    showDemoOpenMoonRockWorld(int);
    calcMoonRockTalkMessageIndex() const;
    addMoonRockTalkMessageIndex(int);
    isAppearedMoonRockTalkMessage(int) const;
    showDemoAfterOpenMoonRockFirst();
    isEnableShowDemoAfterOpenMoonRockFirst() const;
    isEnableShowDemoMoonRockMapWorld(int) const;
    showDemoMoonRockMapWorld(int);
    init();
    write(al::ByamlWriter*);
    read(al::ByamlIter const&);
};
