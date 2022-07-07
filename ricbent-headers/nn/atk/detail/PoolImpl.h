#pragma once

namespace nn { namespace atk { namespace detail { namespace PoolImpl {

CreateImpl(void*, unsigned long, unsigned long);
CreateImpl(void*, unsigned long, unsigned long, unsigned long);
DestroyImpl();
CountImpl() const;
AllocImpl();
FreeImpl(void*);

} } } } 
