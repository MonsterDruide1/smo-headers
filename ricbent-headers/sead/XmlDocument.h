#pragma once

namespace sead { 

class XmlDocument
{
public:
    XmlDocument();
    ~XmlDocument();
    freeXmlElementAll();
    resetEntity_(sead::Heap*);
    addEntity(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&);
    eraseEntity(sead::SafeStringBase<char> const&);
    expandEntityList(int, sead::Heap*);
    save(sead::WriteStream*, sead::Heap*, bool, sead::XmlElement*) const;
    writeXmlInstanceAsText_(sead::WriteStream*, sead::XmlElement*, int, unsigned int, sead::Heap*);
    parseXml_(sead::ReadStream*, sead::Heap*, bool);
    makeXmlInstance_(sead::ReadStream*, sead::Heap*);
    parseXmlDeclare_(sead::ReadStream*, sead::Heap*);
    parseXmlInstance_(sead::ReadStream*, sead::Heap*);
    create(sead::ReadStream*, sead::Heap*, bool, unsigned int);
    replaceXmlNumericCharacterReference_(char*, unsigned int, unsigned int);
    replaceXmlCharacterEntityReference_(char*, unsigned int, unsigned int);
    findElement(sead::SafeStringBase<char> const&);
    setDefaultEntity(char const**, char const**, unsigned int);
    writeXmlContent_(sead::WriteStream*, sead::XmlElement const*, sead::XmlElement::ElementType, unsigned int, sead::Heap*);
    sDefaultEntityNames;
    sDefaultEntityValues;
    sDefaultEntityNum;
};

} 
