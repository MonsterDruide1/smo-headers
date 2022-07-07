#pragma once

namespace sead { 

class XmlElement
{
public:
    XmlElement();
    ~XmlElement();
    setContent(unsigned char*, unsigned int, bool);
    findAttributeValue(sead::SafeStringBase<char> const&) const;
    expandAttributeList(int, sead::Heap*);
    addAttribute(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::Heap*);
    updateAttribute(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::Heap*);
    eraseAttribute(sead::SafeStringBase<char> const&);
    findElementImpl_(sead::SafeStringBase<char> const&) const;
    findElementByAbsolutePath_(sead::SafeStringBase<char> const&) const;
    findElementByRelativePath_(sead::SafeStringBase<char> const&) const;
    findElement(sead::SafeStringBase<char> const&);
    findElement(sead::SafeStringBase<char> const&) const;
    getContentString() const;
    findRoot() const;
    findRoot();
    findSiblingElement_(sead::XmlElement const**, sead::SafeStringBase<char>) const;
    setContentString(sead::SafeStringBase<char> const&, sead::Heap*);
};

} 
