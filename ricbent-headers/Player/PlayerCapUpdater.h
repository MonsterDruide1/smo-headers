#pragma once

class PlayerCapUpdater
{
public:
    PlayerCapUpdater(HackCap*, PlayerModelChangerHakoniwa*);
    init(al::ExecuteDirector*);
    execute();
};
