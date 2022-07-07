#pragma once

namespace agl { namespace shtxt { 

class Clause
{
public:
    Clause();
    Clause(agl::shtxt::Clause::Type, char const*, char const*);
    ~Clause();
    clone(sead::Heap*, agl::shtxt::helper::Knot<agl::shtxt::Clause>::constIterator const&, agl::shtxt::helper::Knot<agl::shtxt::Clause>::constIterator const&, bool);
    findNumberBlock(agl::shtxt::Clause::Type*, char const*);
    set(agl::shtxt::Clause::Type, char const*, char const*);
    appendTo(sead::BufferedSafeStringBase<char>*) const;
    appendTo(sead::BufferedSafeStringBase<char>*, unsigned int) const;
    copyTo(sead::BufferedSafeStringBase<char>*) const;
    toNumber() const;
    forceNumber() const;
    calcLineFeedCount() const;
    chop(unsigned int);
    compareImpl(agl::shtxt::Clause const&, unsigned int, agl::shtxt::Clause const*, agl::shtxt::Clause const*) const;
    compareImpl(sead::SafeStringBase<char> const&, unsigned int, agl::shtxt::Clause const*) const;
    compare(sead::SafeStringBase<char> const&, unsigned int) const;
    compare(agl::shtxt::Clause const&, unsigned int) const;
    calcHash(void const*, unsigned int, unsigned int);
    calcHash(unsigned int) const;
    cCharacterTable;
    cHashTable;
    cTableChecked;
};

} } 
