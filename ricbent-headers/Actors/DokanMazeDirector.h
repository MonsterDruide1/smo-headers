#pragma once

class DokanMazeDirector
{
public:
    DokanMazeDirector(char const*);
    init(al::ActorInitInfo const&);
    initLevel(al::ActorInitInfo const&, DokanMaze*);
    getStartDokan();
    exeWait();
    setRandom();
    setMiss();
    exeInLevel();
};
