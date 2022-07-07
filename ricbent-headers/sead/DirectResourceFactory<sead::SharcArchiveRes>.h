#pragma once

namespace sead { namespace DirectResourceFactory<sead::SharcArchiveRes> {

~DirectResourceFactory();
checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
getRuntimeTypeInfo() const;
newResource_(sead::Heap*, int);

} } 
