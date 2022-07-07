#pragma once

namespace nn { namespace nex { namespace TimedQueue<nn::nex::NetworkEmulator::NetworkPacket> {

~TimedQueue();
Queue(nn::nex::NetworkEmulator::NetworkPacket const&, nn::nex::Time);
Ready(nn::nex::Time);
GetHead(nn::nex::Time);
Dequeue(nn::nex::NetworkEmulator::NetworkPacket const&);

} } } 
