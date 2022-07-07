#pragma once

class RaceRecord
{
public:
    RaceRecord();
    setName(char const*);
    getName() const;
    init();
    isEqualName(char const*);
    setRecord(int, int, int, bool);
    write(al::ByamlWriter*);
    read(al::ByamlIter const&);
};
