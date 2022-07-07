#pragma once

class HintPhotoData
{
public:
    HintPhotoData(GameDataFile const*);
    init();
    saveHintPhoto(char const*);
    checkSavedHintPhoto(char const*) const;
    write(al::ByamlWriter*);
    read(al::ByamlIter const&);
};
