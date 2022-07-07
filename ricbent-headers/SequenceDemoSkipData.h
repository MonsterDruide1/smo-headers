#pragma once

class SequenceDemoSkipData
{
public:
    SequenceDemoSkipData(WorldList const*);
    init();
    showWorldIntroCamera(int);
    showScenarioStartCamera(int, int);
    isAlreadyShowWorldIntroCamera(int) const;
    isAlreadyShowScenarioStartCamera(int, int) const;
    write(al::ByamlWriter*);
    read(al::ByamlIter const&);
};
