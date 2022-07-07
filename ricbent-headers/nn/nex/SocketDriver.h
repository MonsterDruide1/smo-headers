#pragma once

namespace nn { namespace nex { namespace SocketDriver {

CanUseGetAllReceivableSockets() const;
GetAllReceivableSockets(nn::nex::SocketDriver::Socket**, unsigned long, unsigned int);
DEFAULT_CONNECT_THREAD_PRIORITY;
s_connectThreadPriority;
s_ConnectThreadCoreNo;

} } } 
