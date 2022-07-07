#pragma once

class VisitStageData
{
public:
    VisitStageData();
    init();
    checkAlreadyVisit(char const*) const;
    visit(char const*);
    write(al::ByamlWriter*);
    read(al::ByamlIter const&);
};
