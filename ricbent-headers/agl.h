#pragma once

namespace agl {

Initialize(agl::InitArg const&);
AppendRootNodeToOR(sead::hostio::Node*);
LoadResource(sead::ArchiveRes*);
Finalize();
ModifyEndianU32(bool, void*, unsigned long);

} 
