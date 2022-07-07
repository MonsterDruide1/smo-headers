#pragma once

namespace sead { namespace DirectResourceFactory<sead::DirectResource> {

~DirectResourceFactory();
checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
getRuntimeTypeInfo() const;
newResource_(sead::Heap*, int);

} } 
