#pragma once

namespace sead { namespace XmlUtil {

createBackSiblingElement(sead::XmlElement*, sead::Heap*);
createBackChildElement(sead::XmlElement*, sead::Heap*);
createFrontChildElement(sead::XmlElement*, sead::Heap*);
createBackSiblingAndSetupElement(sead::XmlElement*, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::Heap*);
createBackChildAndSetupElement(sead::XmlElement*, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::Heap*);
createFrontChildAndSetupElement(sead::XmlElement*, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::Heap*);

} } 
