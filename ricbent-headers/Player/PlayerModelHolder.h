#pragma once

class PlayerModelHolder
{
public:
    PlayerModelHolder(unsigned int);
    registerModel(al::LiveActor*, char const*);
    changeModel(char const*);
    findModelActor(char const*) const;
    tryFindModelActor(char const*) const;
    isCurrentModelLabel(char const*) const;
    isCurrentModelLabelSubString(char const*) const;
};
