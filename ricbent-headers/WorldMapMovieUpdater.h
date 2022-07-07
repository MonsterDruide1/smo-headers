#pragma once

class WorldMapMovieUpdater
{
public:
    WorldMapMovieUpdater(al::LayoutActor*);
    update(int, bool);
    stop();
    exeWait();
    exeFade();
    exePrep();
    exeDecode();
    exePlay();
    ~WorldMapMovieUpdater();
};
