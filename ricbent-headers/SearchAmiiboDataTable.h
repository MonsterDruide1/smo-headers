#pragma once

class SearchAmiiboDataTable
{
public:
    SearchAmiiboDataTable();
    init();
    write(al::ByamlWriter*);
    read(al::ByamlIter const&);
    getDataNumMax() const;
    isInvalidId(int) const;
    getData(int) const;
    getId(int) const;
    getNumberingId(int) const;
    setId(int, int, int);
    getSearchStartTime(int) const;
    setSearchStartTime(unsigned long, int);
    copy(int, int);
    initByIndex(int);
};
